//
// Created by Pshypher on 14/02/2026.
//
#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    int num;
    int guess;
    bool isGuessed;

    srand(time(0));
    num = rand() % 100;

    isGuessed = false;

    int attempts = 0;
    while (!isGuessed && attempts < 5)
    {
        cout << "Enter an integer greater than or equal to 0 and less than 100: ";
        cin >> guess;
        cout << endl;

        if (guess == num)
        {
            cout << "You guessed the correct number." << endl;
            attempts = attempts - 1;
            isGuessed = true;
        }
        else if (guess < num)
            cout << "Your guess is lower than the number.\n Guess again!" << endl;
        else
            cout << "Your guess is higher than the number.\n Guess again!" << endl;

        attempts = attempts + 1;
    }
    cout << endl;

    if (isGuessed && attempts < 5) {
        cout << "You win!" << endl;
    } else {
        cout << "You lose!" << endl;
    }

    return 0;
}