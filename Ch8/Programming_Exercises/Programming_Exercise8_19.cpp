//
// Created by Pshypher on 27/04/2026.
//
#include <iostream>
#include <iomanip>
#include <cctype>

const int ROW_SIZE = 13;
const int NUM_SEATS_IN_ROW = 6;

using namespace std;

enum TicketType { FIRST_CLASS, BUSINESS_CLASS, ECONOMY_CLASS, INVALID };

void initialize(char seats[][NUM_SEATS_IN_ROW], int rowSize, int colSize);
void ticketTypePrompt(TicketType &ticket);
TicketType getTicket(char ch);
void seatNumberPrompt(char seats[][NUM_SEATS_IN_ROW], TicketType ticket);
bool isValidRow(int row, TicketType ticket);
bool isValidColumn(char col);
void setColumn(char ch, int &column);
bool isSeatOccupied(char seats[][NUM_SEATS_IN_ROW], int row, int col);
void bookSeat(char seats[][NUM_SEATS_IN_ROW], int row, int col);
bool isFullyBooked(const char seats[][NUM_SEATS_IN_ROW], int rowSize, int colSize);
void printSeatingPlan(const char seats[][NUM_SEATS_IN_ROW], int rowSize, int colSize);

int main()
{
    char airlineSeats[ROW_SIZE][NUM_SEATS_IN_ROW];
    TicketType ticket;
    bool isAllSeatOccupied = false;
    char response;

    initialize(airlineSeats, ROW_SIZE, NUM_SEATS_IN_ROW);

    do
    {
        ticketTypePrompt(ticket);
        if (ticket == INVALID)
        {
            cout << "An invalid character was entered into the tty for a ticket category." << endl;
            return -1;
        }
        seatNumberPrompt(airlineSeats, ticket);

        cout << endl;

        printSeatingPlan(airlineSeats, ROW_SIZE, NUM_SEATS_IN_ROW);
        isAllSeatOccupied = isFullyBooked(airlineSeats, ROW_SIZE, NUM_SEATS_IN_ROW);

        cout << endl;
        cout << "Do you wish to continue booking tickets? (y|n): ";
        cin >> response;
        response = static_cast<char>(tolower(response));
    } while (!isAllSeatOccupied && response == 'y');

    return 0;
}

void initialize(char seats[][NUM_SEATS_IN_ROW], int rowSize, int colSize)
{
    for (int i = 0; i < rowSize; i++)
        for (int j = 0; j < colSize; j++)
            seats[i][j] = '*';
}

void ticketTypePrompt(TicketType &ticket)
{
    char ticketChar;

    cout << ">>>>>:::::Welcome to our Commercial Airline:::::<<<<<" << endl;
    cout << "------------------------------------------------------------" << endl;
    cout << "For a ticket class, enter either one of the characters below: " << endl;
    cout << "Business class (B|b)" << endl;
    cout << "Economy  class (E|e)" << endl;
    cout << "First class (F|f): " << endl;
    cin >> ticketChar;

    ticket = getTicket(ticketChar);
}

TicketType getTicket(char ch)
{
    TicketType ticket;
    switch (ch)
    {
        case 'B':
        case 'b':
            ticket = BUSINESS_CLASS;
            break;
        case 'E':
        case 'e':
            ticket = ECONOMY_CLASS;
            break;
        case 'F':
        case 'f':
            ticket = FIRST_CLASS;
            break;
        default:
            ticket = INVALID;
    }

    return ticket;
}

void seatNumberPrompt(char seats[][NUM_SEATS_IN_ROW], TicketType ticket)
{
    string prompt;
    char colChar;
    int row;
    int col;
    bool isValidRow = false;
    bool isValidColumn = false;
    bool isOccupied = true;

    while (!isValidRow || !isValidColumn || isOccupied)
    {
        switch (ticket)
        {
            case BUSINESS_CLASS:
                prompt = "Enter a number between [3, 7] for a row in the business class seat: ";
                break;
            case FIRST_CLASS:
                prompt = "Enter a number between [1, 2] for a row in the first class seat: ";
                break;
            case ECONOMY_CLASS:
                prompt = "Enter a number between [8, 13] for a row in the economy class seat: ";
                break;
            default:
                prompt = "";
        }

        cout << prompt;
        cin >> row;
        cout << endl;
        row--;

        isValidRow = ::isValidRow(row, ticket);
        if (!isValidRow)
        {
            cout << "You've entered a wrong row number. Try again!" << endl;
            continue;
        }

        cout << "Enter a seat between the columns [a-f] or [A-F]: ";
        cin >> colChar;
        cout << endl;

        isValidColumn = ::isValidColumn(colChar);
        if (!isValidColumn)
        {
            cout << "You've entered an incorrect column position. Try again!" << endl;
            continue;
        }

        setColumn(colChar, col);
        isOccupied = isSeatOccupied(seats, row, col);
        if (isOccupied)
            cout << "seat[" << (row + 1) << "][" << static_cast<char>(col + 'A')
                << "] is occupied. Enter a different seat number." << endl;
    }
    bookSeat(seats, row, col);
}

bool isValidRow(int row, TicketType ticket)
{
    bool result = true;
    switch (ticket)
    {
        case BUSINESS_CLASS:
            if (row < 2 || row > 7)
                result = false;
            break;
        case FIRST_CLASS:
            if (row < 0 || row > 1)
                result = false;
            break;
        case ECONOMY_CLASS:
            if (row < 7 || row > 12)
                result = false;
            break;
        default:
            result = false;
    }
    return result;
}

bool isValidColumn(char col)
{
    col = static_cast<char>(toupper(col));
    return col - 'A' >= 0 && col - 'A' <= 5;
}

void setColumn(char ch, int &column)
{
    column = static_cast<char>(toupper(ch)) - 'A';
}

bool isSeatOccupied(char seats[][NUM_SEATS_IN_ROW], int row, int col)
{
    return seats[row][col] == 'X';
}

void bookSeat(char seats[][NUM_SEATS_IN_ROW], int row, int col)
{
    seats[row][col] = 'X';
}

bool isFullyBooked(const char seats[][NUM_SEATS_IN_ROW], int rowSize, int colSize)
{
    for (int i = 0; i < rowSize; i++)
        for (int j = 0; j < colSize; j++)
            if (seats[i][j] == '*')
                return false;

    return true;
}

void printSeatingPlan(const char seats[][NUM_SEATS_IN_ROW], int rowSize, int colSize)
{
    cout << "         " << 'A' << "    " << 'B' << "    " << 'C' << "    " << 'D' << "    " << 'E' << "    " << 'F'
            << endl;
    for (int i = 0; i < rowSize; i++)
    {
        cout << left << "Row " << setw(5) << (i + 1);
        for (int j = 0; j < colSize; j++)
            cout << seats[i][j] << "    ";
        cout << endl;
    }
    cout << endl;
}
