//
// Created by Pshypher on 10/05/2026.
//
#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>

using namespace std;

const int MENU_ITEM_SIZE = 8;

struct menuItemType {
    string menuItem;
    double menuPrice;
};

struct lineItem {
    int quantity;
    menuItemType menu;
};

struct invoice {
    lineItem line[MENU_ITEM_SIZE];
    int invoiceLength;
};

void getData(ifstream& inData, menuItemType menu[]);
bool isDigit(char ch);
void showMenu(const menuItemType menu[], int length);
void getInvoice(const menuItemType menu[], int length, invoice& in);
bool isOutsideRange(char ch, int start, int end);
void process(const menuItemType& menu, invoice& in);
void printInvoice(const invoice& in);

int main()
{
    menuItemType menuList[MENU_ITEM_SIZE];
    string filename;
    ifstream infile;
    invoice breakfastInvoice;
    breakfastInvoice.invoiceLength = 0;

    cout << "Enter the file name of menu to load: ";
    cin >> filename;
    cout << endl;

    infile.open(("../Ch9/Programming_Exercises/" + filename).c_str());

    if (!infile)
    {
        cout << "File " << filename << " does not exist." << endl;
        return 1;
    }

    cout << fixed << showpoint << setprecision(2);

    getData(infile, menuList);
    showMenu(menuList, MENU_ITEM_SIZE);
    getInvoice(menuList, MENU_ITEM_SIZE, breakfastInvoice);
    printInvoice(breakfastInvoice);

    infile.close();

    return 0;
}

void getData(ifstream& inData, menuItemType menu[])
{
    string item;
    double price;
    char dismiss;
    int index;

    inData >> item;
    index = 0;
    while (inData)
    {
        string str;
        inData.get();
        char ch = static_cast<char>(inData.peek());
        while (!isDigit(ch))
        {
            inData >> str;
            item.append(" ");
            item.append(str);

            inData.get(dismiss);
            ch = static_cast<char>(inData.peek());
        }

        inData >> price;
        menu[index].menuItem = item;
        menu[index].menuPrice = price;

        index++;

        inData >> item;
    }
}

bool isDigit(char ch)
{
    int digit = static_cast<int>(ch) - static_cast<int>('0');
    return 0 <= digit & digit < 9;
}


void showMenu(const menuItemType menu[], int length)
{
    cout << "Welcome to Johnny's Restaurant" << endl;

    for (int i = 0; i < length; i++)
        cout << (i + 1) << ". " << left << setw(25) << menu[i].menuItem << '$' << menu[i].menuPrice << endl;
    cout << endl;
}

void getInvoice(const menuItemType menu[], int length, invoice& in)
{
    cout << "Enter a series of digits [1-" << length << "] separated by space to choose items on the supplied menu;"
        << endl;
    cout << "Otherwise enter a character outside the range [1-" << length << "] to end the input: " << endl;
    char line;
    cin >> line;
    while (!isOutsideRange(line, 1, length))
    {
        int pos = line - '0';
        process(menu[pos - 1], in);
        cin >> line;
    }
}

bool isOutsideRange(char ch, int start, int end)
{
    int digit = ch - '0';
    return !isDigit(ch) && (digit < start || digit > end);
}

void process(const menuItemType& menu, invoice& in)
{
    int index = -1;
    for (int i = 0; i < in.invoiceLength; i++)
        if (in.line[i].menu.menuItem == menu.menuItem)
            index = i;

    if (index != -1)
        in.line[index].quantity++;
    else
    {
        in.line[in.invoiceLength].menu = menu;
        in.line[in.invoiceLength].quantity = 1;
        in.invoiceLength++;
    }
}

void printInvoice(const invoice& in)
{
    cout << ">>>>>>>>>> You Ordered <<<<<<<<<<" << endl;
    cout << "---------------------------------" << endl;

    double total = 0;
    for (int i = 0; i < in.invoiceLength; i++)
    {
        total += in.line[i].quantity * in.line[i].menu.menuPrice;
        cout << in.line[i].quantity << "  " << setw(25) << in.line[i].menu.menuItem << '$'
            << in.line[i].menu.menuPrice << endl;
    }
    total *= 1.05;

    cout << setw(28) << "Amount Due" << '$' << total;
}