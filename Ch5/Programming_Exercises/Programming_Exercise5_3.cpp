//
// Altered by Pshypher on 10/02/2026.
//

#include <iostream>

using namespace std;

int main()
{
    char letter;
    int digit, num;

    cout << "Program to convert uppercase letters to  their corresponding telephone digits." << endl;

    cout << "To stop the program enter #." << endl;

    cout << "Enter an upper or lowercase letter: ";
    cin >> letter;
    cout << endl;

    while (letter != '#')
    {
        cout << "Letter: " << letter;
        cout << ", Corresponding telephone digit: ";

        char start;
        if ('A' <= letter && letter <= 'Z')
            start = 'A';
        else if ('a' <= letter && letter <= 'z')
            start = 'a';
        else
            start = static_cast<char>(0);

        num = static_cast<int>(letter) - static_cast<int>(start);

        if (0 <= num && num < 26)
        {
            digit = (num / 3) + 2;

            if (((num / 3 == 6) || (num / 3 == 7))
                    && (num % 3 == 0))
                digit = digit - 1;

            if (digit > 9)
                digit = 9;

            cout << digit << endl;
        }
        else
            cout << "Invalid input." << endl;

        cout << "\nEnter another uppercase letter to find its corresponding telephone digit." << endl;
        cout << "To stop the program enter #." << endl;

        cout << "Enter a letter: ";
        cin >> letter;
        cout << endl;
    }

    return 0;
}