Chapter 5

1a. true
1b. false
1c. true
1d. false
1e. true
1f. true
1g. true
1h. false
1i. true

2. i = 5 and num = 48

3. 40

4. 1 3 5 7
5. The while loop terminates when the numeric value of ch in the collating sequence is 91, that is ch becomes [

6. Sum = 90

7. Sum = 26

8. Sum = 190

9. temp = 0

10. int count = 0
    int sum = 0;

    while (count <= 20)
    {
        sum = sum + num;
        count++;
        cin >> num;
    }

11a. 20 *
11b.  *
11c. 41 70 111 181 *
11d. 27 44 71 115 *

12. 0 1 2 1 4 3 6 5

13. #include <iostream>
    #include <iomanip>

    using namespace std;

    int main()
    {
        char response;
        double num1;
        double num2;

        cout << "This program adds two numbers." << endl;
        cout << "Would you like to run the program: (Y/y) ";
        cin >> response;
        cout << endl;

        cout << fixed << showpoint << setprecision(2);

        while (response == 'Y' || response == 'y')
        {
            cout << "Enter two numbers: ";
            cin >> num1 >> num2;
            cout << endl;

            cout << num1 << " + " << num2 << " = " << num1 + num2 << endl;

            cout << "Would you like to add again: (Y/y) ";
            cin >> response;
            cout << endl;
        }

        return 0;
    }

14. 2 3 4 5

15. 2 3 4 5 6

16. 8 6 4 2

17. 0 0 2 6 12 20

18a. Counter control loop
18b. Sentinel control loop
18c. EOF control loop

19. j is the loop control variable, j = 1 is the initialization statement, j <= 10 is the loop condition, j++ is the update statement, and s ‎ =  s + j * (j - 1) is the statement that updates the value of s.

20. 25 600

21. num = 485, y = 15

22a. 42
22b. 2
22c. 1

23a. *
23b. infinite amounts of "*" is printed out on a single line
23c. infinite amounts of "*" is printed out on a single line
23d. ****
23e. ******
23f. ***

24. for (i = 1; i <= 1000; i++)
    {
        if (i % 3 == 0 || i % 5 == 0)
            sum = sum + i;
    }

25. There’s a relationship between the variables x and y. (y - 1) is the number of times we will need to multiply 3 by  to get x. The output is
x = 19683, y = 10

26. 2 4 16 256

27. 0 - 24
    25 - 48
    50 - 72
    75 - 96
    100 - 120
    125 - 144
    150 - 168
    175 - 200

28. temp = 896

29a. while  and do..while
29b. do…while
29c. while
29d. while

30. #include <iostream>

    using namespace std;

    const int LIMIT = 35;

    int main()
    {
        long long num1, num2;
        double first, second;

        cout << "Enter two integers less than 100: ";
        cin >> num1 >> num2;

        for (int count = 1; count < LIMIT; count++)
        {
            first = (num1 * num2) / 2.0;
            if (num1 / num2 == 0)
                second = (num1 - num2) % 2.0;
            else
                second = num1 + num2;
            num1 = num1 + num2;
            num2 = num2 * (count - LIMIT);
        }

        cout << num1 << " " << num2 << " " << (first % 5) << " " << (second % 7) << endl;

        return 0;
    }

31. The loop conditional expression is evaluated before the body of the loop is executed for a pretest loop, while the body of the loop is evaluated at least once in a posttest loop.

32a. The loop is executed five times. Output: 55 50
32b. The loop is executed four times. Output: 80 80
32c. The loop executes once. Output: 7 20
32d. The loop is executed three times. Output: 35 35
32e. The loop is executed three times. Output: 40 30
32f. The loop is not executed at all. Output: 5 30

33. int num;

    do
    {
        cout << "Enter a number less than 20 or greater than 75: ";
        cin >> num;
    }
    while (20 <= num && num <= 75);

34. int i, value = 0;

    for (i = 0; i <= 20; i++)
    {
        if (i % 2 == 0 && i <= 10)
            value = value + i * i;
        else if (i % 2 == 0 && i > 10)
            value = value + i;
        else
            value = value - i;
    }

    cout << "value = " << value << endl;
Output: value = 200

35. int i = 0, value = 0;

    do
    {
        if (i % 2 == 0 && i <= 10)
            value = value + i * i;
        else if (i % 2 == 0 && i > 10)
            value = value + i;
        else
            value = value - i;
        i = i + 1;
    }
    while (i <= 20);

36. #include <iostream>

    using namespace std;

    int main()
    {
        int total = 0,
            count = 0,
            number;

        do
        {
            cin >> number;
            if (number != -1)
            {
                total = total + number;
                count++;
            }
        }
        while (number != -1);

        cout << "The number of data read is " << count << endl;
        cout << "The sum of the numbers entered is " << total << endl;

        return 0;
    }

37. cin >> number;
    while (number != -1)
    {
        total = total + number;
        cin >> number;
    }
    cout << endl;
    cout << total << endl; 

38. cin >> number;
    while (number != -1)
    {
        total = total + number;
        cin >> number;
    }
    cout << endl;
    cout << total << endl;

39a. number = 1;
     while (number <= 10)
     {
         cout << setw(3) << number;
         number = number + 1;
     }

39b. number = 1;
     do
     {
         cout << setw(3) << number;
         number = number + 1;
     }
     while (number <= 10);

40a. int i;
     int value = 3;

     i = 0;
     while (i < 5)
     {
         value = value * (i + 1) + i;
         i = i + 1;
     }

     cout << "value = " << value << endl;

40b. int i;
     int value = 3;

     i = 0;
     do
     {
         value = value * (i + 1) + i;
         i = i + 1;
     }
     while (i < 5);

41a. 36 94 260 708
41b. 4 20
41c. 30
41d. 98 250

42a.  1  1  1  1  1
      2  2  2  2  2
      3  3  3  3  3
      4  4  4  4  4
      5  5  5  5  5

42b.   2    3    4    5
       3    4    5
       4    5
       5

42c.  1
      1  2
      1  2  3
      1  2  3  4
      1  2  3  4  5

42d.  1  2  3  4  5  6  7  8  9 10
     11 12 13 14 15 16 17 18 19 20
     21 22 23 24 25 26 27 28 29 30
     .
     .
     .
     91 92 93 94 95 96 97 98 99100

42e.         1
            121
           12321
          1234321
         123454321
        12345654321
       1234567654321
      123456787654321
     12345678987654321

43. -1 0 3 8 15 24

44. 12

45. 12 11 9 7 6 4 2 1
46. A break statement jumps out of the body of the loop and has the side effect of forcing the program to continue it’s execution on the next line outside the body of the loop.
