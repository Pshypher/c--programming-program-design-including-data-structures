Chapter 6

1a. false
1b. true
1c. true
1d. true
1e. false
1f. false
1g. true
1h. false
1i. true
1j. true
1k. false
1l. false
1m. false
1n. true

2a. #
2b. K
2c. 3
2d. -
2e. t
2f. :
2g. u
2h. {

3a. 18
3b. 20.50
3c. 87.20
3d. 16.00
3e. 1717.82
3f. 2.80
3g. 14.00
3h. 11.16
3i. 27
3j. 20
3k. 19
3l. -5
3m. 2.25
3n. 4096.00
3o. 0.01
3p. 3.03

4a. pow(9.2, 4.0);
4b. sqrt(5 * x - 3 * x * y);
4c. pow(a + b, 1.0 / 3);
4d. (-b + sqrt(b * b - 4 * a * c) / (2 * a);
4e. fabs(3 * x * x - 2 * y);

5. a and b

6a. 10.0
6b. 11
6c. 15
6d. -30

7a. valid
7b. valid
7c. valid
7d. valid
7e. valid
7f. invalid, the box function call should have 3 actual parameters passed in instead of 2
7g. invalid, same reason as 7f
7i. invalid, same reason as 7f

8a. 5
8b. 3
8c. 40 10
8d. 8

9a. 2 parameters, function type is double
9b. 3 parameters, function type is int
9c. 4 parameters, function type is string
9d. 2 parameters, function type is char
9e. 4 parameters are needed to call the function third, a string, a string, an int, and a double in that order
9f. cout << first(2.5, 7.8) << endl;

9g. cout << grade(82.50, 92.50) << endl;

9h. cout << third("lewis", "therin", 0, 1.0) << endl;

10. function prototypes acts as a sort of promise to the C++ compiler that the function would be defined somewhere within the program. Because C++ programs executes the first statement encountered in the main function first, including the function prototypes guarantees that there is no runtime error when user-defined functions are called during execution.

11. boolean isWhitespace(char ch) {
        if (ch == ' ' || ch == '\n' || ch == '\t')
            return true;
        else
            return false;
    }

12a. 4.00
12b. 74.00
12c. 92.62

13ai. 72
13aii. -200
13b. secret calculates the multiplication of m and n

14. boolean func(double first, double second, double third)
    {
        return floor(first * second) == floor(third);
    }

15a. 385
15b. it sums up numbers whose roots are resolved to integers

16. 7.5
    -17
    -1
    1
    2

17. double func(double first, double second)
    {
        return pow(first, second) + pow(second, first);
    }

18a. -120
18b. 37
18c. 6
18d. 0

19a. simply use the return keyword, succeeded by a semi-colon.
19b. a return statement in a void function is used to exit early from the function.

 20a. Function Prototypes
	  Line 6
  	  Function Heading
	  Line 7 	  Lines 19 - 20 	  Function Body
	  Lines 8 - 18
	  Lines 21 -26
	  Function Definitions 	  Lines 7 - 18 	  Lines 19 - 26
20b. Function Call Statements
	 Line 13
	 Line 15
	 Formal Parameters
	 Lines 19 -20 speed, time, distance, c
	 Actual Parameters
	 Line 13 s, t, d, and ch
	 Line 15 75, 8, d and ch
20c. Value Parameters
	 speed, time
	 Reference Parameters
	 distance and c
20d. Local Variables
	 s, t, d, ch and num
	 Global Variables
	 temp
20e. Named Constants
	 RATE, STAR
20f. d = 300, ch = +
     d = 600, ch = ,

21a. a formal parameter is an identifier used to pass in values into a function, an actual parameter on the other hand is an expression conveying the actual value or address(memory location) passed into the function.
21b. a value parameter copies the value from the scope of the caller function into the called function, a reference parameter on the other hand receives the memory location of the actual parameter into the function through the corresponding formal parameter and changes made on a reference parameter are seen on the identifier passed as an actual parameter in the scope of the caller function.
21c. a local variable is scoped within a function or block which translates to it being accessible only within a function(block), a global variable is accessible all through the entire program

22a. Programming I
22b. Programming II
22c. Invalid input. You must enter a 1 or 2
22d. Invalid input. You must enter a 1 or 2

23. void func(int x)
    {
        if (x % 2 == 0)
            cout << 2 * x << endl;
        else
            cout << 5 * x << endl;
    }

24. void func(double num1, double num2, double num3)
    {
        double sum;
        double average;
        sum = num1 + num2 + num3;
        average = sum / 3;

        if (average >= 70)
            cout << "Pass" << endl;
        else
            cout << "Fail" << endl;
    }

25. void func(int& num1, double& num2, string& str)
    {
        num1 = 0;
        num2 = 0.0;
        str = “”;
    }


26. void func(int n, int m, int& sum, double& average)
    {
        for (int i = n; i <= m; i++)
            sum = sum + i;

        average = sum * 1.0 / (m - n + 1);
    }

27. 7, 0, 0
    1, 0, 8
    8, 1, 8
    2, 1, 1

28. 6 10 20
    2 10 8
    2 2 14

29. #include <iostream>

    using namespace std;

    int secret(int, int);

    void func(int x, int y);

    int main()
    {
        int num1, num2;

        num1 = 6;                            - 1
        cout << "Enter a positive integer: " - 2
        cin >> num2                          - 3
        cout << endl                         - 4
        cout << secret(num1, num2) << endl;  - 8
        num2 = num2 - num1;                  - 9
        cout << num1 << " " << num2 << endl; - 10
        func(num2, num1);                    - 15
        cout << num1 << " " << num2 << endl; - 16

        return 0;                            - 17
    }

    int secret(int a, int b)
    {
        int d;

        d = a + b                            - 5
        b = a * d;                           - 6

        return b;                            - 7
    }

    void func(int x, int& y)
    {
        int val1, val2;

        val1 = x + y;                        - 11
        val2 = x * y;                        - 12
        y = val1 + val2;                     - 13
        cout << val1 << " " << val2 << endl; - 14
    }

30. z = 8, one = 11, two = 5
    z = 16, one = 11, two = 21
    z = 15, one = 19, two = 11
    z = 30, one = 19, two = 41
    z = 20, one = 30, two = 10
    z = 40, one = 30, two = 50

31. #include <iostream>
    #include <cmath>
    #include <iomanip>

    using namespace std;

    double trackVar(double& x, double y);

    int main()
    {
        double one, two, z;

        cout << fixed << showpoint << setprecision(2);

        cout << "Enter two numbers: ";
        cin >> one >> two;
        cout << endl;

        z = trackVar(one, two);
        cout << "z = " << z << ", one = " << one << ", two = " << two << endl;
        z = trackVar(two, one);
        cout << "z = " << z << ", one = " << one << ", two = " << two << endl;

        return 0;
    }

    double trackVar(double& x, double y)
    {
        double z;

        z = floor(x) + ceil(y);
        x = x + z;
        y = y - z;

        return z;
    }

32.  one, two are local scope within the main function. x, y, and z are also local scope within the function trackVar.

33. 3 5
      108 0
      108 5

34. Line 9: In main: num1 = 10, num2 = 20
      Line 19: In funOne: a = 10, x = 12, and z = 22
      Line 21: In funOne: a  = 1010, x = 17, and z = 22
      Line 23: In funOne: a = 18, x  = 17, and z  = 22
      Line 11: In main after funOne: num1 = 18, num2 = 20

35. stVar = 3, u = 3, x = 2
    stVar = 9, u = 3, x = 3
    stVar = 18, u = 3, x = 4
    stVar = 36, u = 3, x = 5

36. the signature of a function is a combination of the name of the function and the formal parameter list

37. b and d

38c. 53, 60.5
38d. 51, 57.5
