//
// Created by Pshypher on 08/03/2026.
//
#include <iostream>

using namespace std;

int reverseDigit(int num);

int main()
{
    int num;

    cout << "Enter a number: ";
    cin >> num;
    cout << endl;

    cout << num << " reversed is " << reverseDigit(num) << endl;
}

int reverseDigit(int num)
{
    int reverse = 0;

    while (num != 0)
    {
        reverse = reverse * 10 + num % 10;
        num = num / 10;
    }

    return reverse;
}
