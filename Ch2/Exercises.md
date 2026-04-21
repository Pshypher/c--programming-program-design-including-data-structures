Chapter 2

1a. False
1b. False
1c. True
1d. True
1e. False
1f. False
1g. True
1h. True
1i. False
1j. True
1k. True
1l. False

2. b, d, e, f

3. b, e

4. A reserved word is a pre-defined identifier that is included as a part of the standard C++ language, a user defined identifier in contrast is declared and used in a C++ program by the programmer and does
    belong to the set of reserved keywords in the C++ standard language specification.

5. quizNo1 and quizno1 are not the same.

6a. 22
6b. 2
6c. 14
6d. 8
6e. 7.0
6f. 21
6g. 20
6h. 0.0
6i. 15.5

7a. 7
7b. 5.5
7c. -1.0
7d. mod operator does not support floating point types.
7e. 13.5
7f. 1
7g. z is a double value and the mod operator % does not support floating point types.
7h. 3.0

8d. the assignment operation is right associative , you cannot assign the value in an identifier newNum to an expression.
8f. you can’t assign the result of an expression to another expression.
8g. you can’t assign the result of an expression to another expression.
8h. the modulo operator % does not support floating point operand(s).

9. x = 9, y = 5, w = -3, z = 3
10. char grade = 'B+';   // a char variable should only contain a single character within single quotes
    char grade = 'B';

    double 28.5 = num;    // The identifier num should succeed the type declaration double and the value should appear on the right side of the assignment operator
    double num = 28.5;

    string message = ''First C++ course';    // strings should be enclosed in a pair of double quotes
    string message = "First” C++ course";

    int age = 18 years;    // integer literals consists only of numbers not letters or whitespace characters
    int age = 18

11. a & c
12a. int x, y;
     x = 25;
     y = 18;
12b. int temp = 10;
     char ch = 'A';
12c. x = x + 5;
12d. double payRate = 12.50;
12e. int tempNum = firstNum;
12f. int temp = x;
     x = y;
     y = temp;
12g. cout << "x = " << x << endl;
     cout << "y = " << y << endl;
     cout << "x + 12 / y - 18 = " << x + 12 / y - 18 << endl;
12h. char grade = 'A';
12i. int a, b, c, d;
12j. static_cast<int>('Z');


13a. 9.0 / 5 * c + 32;
13b. static_cast<int>(‘+’);
13c. static_cast<int>(x);
13d. string str = "C++ Programming is exciting”;
13e. totalInches = 12 * feet + inches;
13f. i++;
13g. double v = 4 * 3.1416 * r * r * r / 3;
13h. double s = 2 * (3.1416 * r * r + 3.1416 * r * h);
13i. a + (b - c) / (d * (e * f - g * h));
13j.  (-b + (b * b - 4 * a * c)) / (2 * a);

14. x = 1, y = 102, z = 15, w = 44

15. x = 30, y = 11, z = 33, w = 52.5, t = 28.25

16a. x = 18, y = 5, z = 4
16b. 5 * x - y  = 85
16c. Product of 18 and 4 is 72
16d. x - y / z = 17
16e. 18 square = 324

17a. 1000
17b. 42.5
17c. 1.25
17d. 11.0
17e. 9
17f. 88.25
17g. -2

18a. cout << "\n";
18b. cout << "\t";
18c. cout << “\””;

19. a, c

20a. char grade;
20b. double salesTax;
20c. int numberJuiceBottlesSold;
20d. double billingAmount;
20e. double gradePointAverage;

21a. int num1, num2;
21b. cout << "Enter two integers seperated by a whitespace";
21c. cin >> num1 >> num2;
21d. cout << "num1 = " << num1 << ",num2 = " << num2 <<  endl;
cout << "2 * num1 - num2 = " 2 * num1 - num2 << endl;


22. #include <iostream>
    using std;

    int main() {
        double height;
        int weight;
        double discount;
        double billingAmount;
        double bonus;
        int hoursWorked = 45;

        height = 6.2;
        weight = 156;
        cout << height << " " << weight << endl;
        discount = static_cast<int>(2 * height + weight) % 10;
        double price = 49.99;
        const double DECIMAL = 7.55;
        billingAmount = price * (1 - discount) - DECIMAL;
        cout << price << " " << billingAmount << endl;
        bonus = hoursWorked * PAY_RATE / 50;
        cout << "Bonus = " << bonus << endl;

        return 0;
    }

23. #include <iostream>
    using namespace std;

    const char STAR = “*”;
    const int PRIME = 71;
    const int ONE = 1;

    int main()
    {
        int count, sum;
        double x;
        int newNum;

        count = 1;
        sum = count + PRIME;
        x = 25.67;
        newNum = count * ONE + 2;
        sum = count + sum;
        sum++;
        x = x + sum * COUNT;
        sum += 3;
        cout << " count = " << count << ", sum = " << sum << ", PRIME = " << PRIME << endl;
        return 0;
    }

24. #include <iostream>
    #include <string>

    using namespace std;

    int main()
    {
        int num1, num2;
        string str1;

        cout << "Enter a string without any blanks in it: ";
        cin >> str1;
        cout << endl;

        cout << "Enter two integers: ";
        cin >> num1 >> num2;
        cout << endl;

        cout << str1 << " " << "num1 * num2 = " << num1 * num2 << endl;

        return 0;
    }

25. The variable must be declared and initialized before it can be used in a program.

26. b

27a. x += 5; 27b. x *= 2 * y;
27c. totalPay += currentPay;
27d. z *= x + 2;
27e. y /= x + 5;

28a. x = x + 5 - z;
28b. y = y * 2 * x + 5 * y - z * y;
28c. w = w + 2 * z + 4;
28d. x = x - z - y + t;
28e. sum = sum + num;

29. a = 8, b = 3, c = UND;
    a = 8, b  = 2,  c = 12;
    a = 9, b = -3, c = 11;

30. a = 6, b = 3, c = 2.2, sum = 11
    a = 6, b = 3, c = 2.2, sum  = 11
    a  = 6, b = 3, c = -3.8, sum  = 11
    a  = 6, b  = 3, c  = -3.8, sum  = 11

31. firstNum = 62
    Enter three numbers: 35 10.5 27
    The numbers you entered are 35, 10.5, and 27
    z = 33
    Enter grade: B
    The letter that follows your grade is: C

32. Enter last name: Miller
    Enter a two digit integer: 34
    Enter a decimal Number: 62.5
    Name: Miller
    Id: 34
    Mystery number: -5.14285714285714

33. #include <iostream>
    #include <string>

    using namespace std;
    const double X = 13.45;
    const int Y = 18;
    const char STAR = '*';

    int main()
    {
        string employeeID;
        string department;
        int num;
        double salary;

        cout << "Enter employee ID: ";
        cin >> employeeID;
        cout << endl;

        cout << "Enter department: ";
        cin >> department;
        cout << endl;

        cout << "Enter a positive integer less than 80: ";
        cin >> num;
        cout << endl;

        salary = num * X;
        cout << "ID: " << employeeID << endl;
        cout << "Department " << department << endl;
        cout << "Star: " << STAR << endl;
        cout << "Wages: $" << salary << endl;
        cout << "X = " << X << endl;
        cout << "X + Y = " << X + Y << endl;

        return 0;
    }

34. The program requires input of the string, 2 double and 1 integer data type
    The order of the input should be string, double, double, integer respectively,
    with whitespace characters serving as delimiters e.g Milk 0.05 1.75 516




