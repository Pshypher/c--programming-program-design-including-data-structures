//
// Created by Pshypher on 25/03/2026.
//
#include <iostream>
#include <string>

using namespace std;

int main()
{
    string line;

    cout << "Enter your name, social security number, user id and password separated by spaces: ";
    getline(cin, line);
    cout << endl;

    string::size_type pos = line.find_first_of("123456789");
    string::size_type end = line.find(' ', pos);
    line.replace(pos, end - pos, "***-**-****");

    // Find the whitespace that succeeds the user ID
    pos = line.find("* ") + 2;
    pos = line.find(' ', pos);

    string::size_type len = line.length() - (pos + 1);
    line.replace(pos + 1, len, "");
    line.insert(pos + 1, len, '*');

    cout << line << endl;

    return 0;
}