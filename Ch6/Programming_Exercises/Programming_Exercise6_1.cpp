//
// Created by Pshypher on 07/03/2026.
//
#include <iostream>
#include <string>

using namespace std;

bool isPalindrome(string str);

int main()
{
    cout << "isPalindrome(mAdaM): " << isPalindrome("madam") << endl;
    cout << "isPalindrome(abBa): " << isPalindrome("abba") << endl;
    cout << "isPalindrome(22): " << isPalindrome("22") << endl;
    cout << "isPalindrome(67876): " << isPalindrome("67876") << endl;
    cout << "isPalindrome(444244): " << isPalindrome("444244") << endl;
    cout << "isPalindrome(TryMeuUemyrt): " << isPalindrome("trymeuuemyrt") <<  endl;

    return 0;
}

bool isPalindrome(string str)
{
    int length = str.length();

    for (int i = 0; i < length / 2; i++)
    {
        char left = static_cast<char>(tolower(str[i]));
        char right = static_cast<char>(tolower(str[length - i - 1]));
        if (right != left)
            return false;
    }

    return true;
}