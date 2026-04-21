Chapter 4

1a. true
1b. false
1c. false
1d. false
1e. true
1f. false
1g. true
1h. false
1i. true
1j. false
1k. true

2a. false
2b. false
2c. true
2d. true
2e. true
2f. false

3a. false
3b. true
3c. true
3d. false

4a. false
4b. true
4c. true
4d. false
4e. false

5a. x == z: false
5b. y != z - 9: false
5c. x - y == z + 10: true
5d. !(z < w): true
5e. w - y < x - 2 * z: false


6.  c & e

7a. +--+
7b. 12 / 2 != 4 + 1
7c. *
7d. C++
7e. high

8. a, c & d

9a. ?%!!
9b. a b c d
    ##
9c. Flying Coding


10. The value of done is: true

11. The value of done is: false

12. 28 25
    31
    true
    false
    true
    false
    31 25

13. if (score <= 60)
        cout << "Fail" << endl;
    else
        cout << "Pass" << endl;


14a. switch (standing) {
        case 'F':
            cout << "First Year" << endl;
            break;
        case 'S':
            cout << "Sophomore" << endl;
            break;
        default:
            cout << "Junior or Senior" << endl;
    }

14b. if (standing == '1' || standing == '2')
        cout << "First Year or Sophomore" << endl;
     else if (standing == '3' || standing == '4')
        cout << "Junior or Senior" << endl;
     else
        cout << "Graduate Student" << endl;


15. if (0 < numOfItemsBought && numOfItemsBought < 5)
        shippingCharges = 7.00 * numOfItemsBought;
    else if (5 <= numOfItemsBought && numOfItemsBought < 10)
        shippingCharges = 3.00 * numOfItemsBought;
    else if (numOfItemsBought >= 10)
        shippingCharges = 0.0;

16. 27 12 39 -15

17. 20 10

18. -10 -20

19. if (sale > 20000)
        bonus = 0.10;
    else if (sale > 10000 && sale <= 20000)
        bonus = 0.05;
    else
        bonus = 0;

20. if (0 < overSpeed && overSpeed <= 5)
        fine = 20;
    else if (5 < overSpeed && overSpeed <= 10)
        fine = 75;
    else if (10 < overSpeed && overSpeed <= 15)
        fine = 150;
    else if (overSpeed > 15)
        fine = 150 + 20 * (overSpeed - 15);

21a. Discount is 10% because score which is 95 is greater than 90, thus the expression in the if branch evaluates to true and the statement is executed.
21b. There is no output because the score (85) is less than 90 the expression in the if statement evaluates to false.

22a. The output is:
			Grade is C.
			Grade is C.
	The score is remains 70
22b. The output is:
			Grade is C.
			Grade is C.
	The score becomes 80

23a. z = (x == y) ? x + y : (x + y) / 2;
23b. wages = (hours >= 40.0) ? 40 * 7.50 + 1.5 * 7.5 * (hours - 40) : hours * 7.50;
23c. closingCosts = (loanAmount >= 200000) ? 10000 : 8000;

24a. if (overSpeed > 10)
        fine = 200;
     else
        fine = 75;

24b. if (fuel >= 10)
        drive = 150;
     else
        drive = 30;

24c. if (bill >= 50.00)
        tip = 0.20;
     else
        tip = 0.10;

25a. 40.0
25b. 40.0
25c. 55.0

26a. valid
26b. not valid, there’s a syntax error in the switch block, a case statement should be succeeded by a `:`
26c. valid
26d. not valid, case 2 should be inside the block established by a pair of curly braces `{}`

27a. 8
27b. 64
27c. 0
27d. 12

28a. 2
28b. 2
28c. -1
28d. 9

29a. 8
29b. 12167
29c. 8000
29d. 3

30. #include <iostream>
    using namespace std;

    int main()
    {
        int num1, num2;
        bool found = false;

        cout << "Enter two integers: ";
        cin >> num1 >> num2;
        cout << endl;

        found = (num1 > num2);

        if (found)
            switch (num1 % num2)
            {
                case 0:
                    num2 = num1 / 2;
                    break;
                case 1:
                    num1 = num2 / 2;
                    break;
                default:
                    num1 = num1 / num2;
                    num2 = num1 * num2;
            }
        else
        {
            num1 = num1 - num2;
            num2 = (num1 + num2) / 10;
        }
        cout << num1 << " " << num2 << endl;
        return;
    } 

30a. 2 5
30b. -14 1

31. #include <iostream>
    using namespace std;

    const int SECRET = 5;
    int main()     {
        int x, y, w, z;
        z = 13;

        if (z < 15)
            x = 12, y = 8, w = x + y + SECRET;
        else
            x = 12, y = 8, w = x + y + SECRET;

        cout << "w = " << w << endl;

        return 0;
    } 

32. #include <iostream>
    #include <cmath>

    using namespace std;

    int main()
    {
        double firstNum, secondNum;

        cout << "Enter two nonzero number: ";
        cin >> firstNum >> secondNum;
        cout << endl;

        if (firstNum <= 0 || secondNum <= 0)
            cout << "Both numbers must be positive." << endl;
        else if (fabs(firstNum - secondNum) < 0.000001)
            cout << firstNum + secondNum << endl;
        else if (firstNum <= 2 && firstNum != secondNum)
            cout << pow(secondNum, firstNum) << endl;
        else
            cout << firstNum * secondNum << endl;

        return 0;
    }

33. switch (classStanding)
    {
        case 'f':
            dues = 150;
            break;
        case 's':
            if (gpa >= 3.75)
                dues = 75;
            else
                dues = 120;
            break;
        case 'j':
            if (gpa >= 3.75)
                dues = 50;
            else
                dues = 100;
            break;
        case 'n':
            if (gpa >= 3.75)
                dues = 25;
            else
                dues = 75;
            break;
        default:
            cout << "Class standing '" << classStanding << "' is not recognized." << endl;
    }
34.
1. Prompt the user for the billingAmount
2. Get the billingAmount
3. Prompt the user for the desired payment
4. Get the payment
5. balance = billingAmount - payment
6. Define number variables credit and penalty
7. If balance is equal to 0
    a. credit = 0.01 * billingAmount
    b. If credit greater than 10
        i. credit = 10
    c. Print out the credit to the user.
8. Otherwise if payment is greater than or equal to 0.5 of billingAmount
    a. penalty = 0.05 * balance
    b. Print out the value of the remaining balance and the penalty.
9. Otherwise if payment is greater than or equal to 0.2 of billingAmount and payment is less than 0.5 of billingAmount
    a. penalty = 0.10 * balance
    b. Print out the value of the remaining balance and the penalty.
10. Otherwise
    a. penalty = 0.20 * balance
    b. Print out the value of the remaining balance and the penalty.

