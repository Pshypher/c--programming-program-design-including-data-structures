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


void getData(ifstream& inData, menuItemType menu[]);
bool isDigit(char ch);
void showMenu(const menuItemType menu[], int length);
void getInvoice(const menuItemType menu[], menuItemType invoice[], int menuSize, int& invoiceSize);
bool isOutsideRange(char ch, int start, int end);
void process(const menuItemType& menu, menuItemType invoice[], int menuSize, int& invoiceSize);
bool contains(const menuItemType invoice[], menuItemType menu, int size);
void printInvoice(const menuItemType invoice[], int size);

int main()
{
    menuItemType menuList[MENU_ITEM_SIZE];
    menuItemType invoiceList[MENU_ITEM_SIZE];
    int size = 0;
    string filename;
    ifstream infile;


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
    getInvoice(menuList, invoiceList, MENU_ITEM_SIZE, size);
    printInvoice(invoiceList, size);

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

void getInvoice(const menuItemType menu[], menuItemType invoice[], int menuSize, int& invoiceSize)
{
    cout << "Enter a series of digits [1-" << menuSize << "] separated by space to choose items on the supplied menu;"
        << endl;
    cout << "Otherwise enter a character outside the range [1-" << menuSize << "] to end the input: " << endl;
    char line;
    cin >> line;
    while (!isOutsideRange(line, 1, menuSize))
    {
        int pos = line - '0';
        process(menu[pos - 1], invoice, menuSize, invoiceSize);
        cin >> line;
    }
}

bool isOutsideRange(char ch, int start, int end)
{
    int digit = ch - '0';
    return !isDigit(ch) && (digit < start || digit > end);
}

void process(const menuItemType& menu, menuItemType invoice[], int menuSize, int& invoiceSize)
{
    if (invoiceSize < menuSize && !contains(invoice, menu, invoiceSize))
    {
        invoice[invoiceSize] = menu;
        invoiceSize++;
    }
}

bool contains(const menuItemType invoice[], menuItemType menu, int size)
{
    bool found = false;
    for (int i = 0; i < size; i++)
        if (invoice[i].menuItem == menu.menuItem)
        {
            found = true;
            break;
        }

    return found;
}

void printInvoice(const menuItemType list[], int size)
{
    cout << ">>>>>>>>>> You Ordered <<<<<<<<<<" << endl;
    cout << "---------------------------------" << endl;

    double total = 0;
    for (int i = 0; i < size; i++)
    {
        total += list[i].menuPrice;
        cout << setw(25) <<list[i].menuItem << '$' << list[i].menuPrice << endl;
    }

    total *= 1.05;
    cout << setw(25) << "Amount Due" << '$' << total;
}