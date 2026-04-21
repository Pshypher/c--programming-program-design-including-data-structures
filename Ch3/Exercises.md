Chapter 3

1a. True
1b. True
1c. True
1d. False
1e. True
1f. True
1g. False
1h. False
1i. True
1j. False
1k. True

2a. x = 78, y = 86, z = 18, ch = ‘#’
2b. ch = ‘7’, x = 8, y  = 86, z = 18
2c. x  = 78, ch = ‘ ‘, y  = 86, z = 18
2d. x  = 78, ch = ‘8’, y = 6, z = 18
2e. ch = ‘7’, x = 8, y = 86, z = 18

3a. dec1  = 56.50, int1 = 67, int2 = 48, dec2 = 62.72
3b. int1 = 56, dec1 = 0.50, dec2 = 48.0, int2 = 62
3c. dec1 = 56.50, dec2 = 67.0, int1 = 48, int2 = 62
3d. Int1 = 56, dec1 = 0.50, int2 = 67, dec2 = 48.0
3e. Int1 = 56, int2 = UNDEFINED, dec1 = UNDEFINED, dec2 = UNDEFINED

4a. x  = 38, y = 26, symbol = '2'
4b. x  = 38, y = 67, symbol = ‘ ‘
4c. x = 24, y = 38, symbol’ = $’
4d. x = 67, y = 24, symbol = ‘3’
4e. x = 24, symbol = ‘$’, y = 63

5a. Samantha 168.5 46
5b. Samantha 0.5 168
5c. ** 2.7 45

6a. int1 = 13, ch = ‘2’, int2 = 4, dec = 16.2
6b. int1 = 45, ch = ‘$’, int2 = 36 dec = 9.2
6c. Int1 = 16, ch = ‘#’, int2 = UNDEFINED, dec =UNDEFINED; Input failure

7. The pow function computes the exponent of a number x by an another value y. The cmath header file needs to be included.

8. The sqrt function calculates the root of a number. The cmath header file needs to be  included.

9. setprecision function determines the precision of floating point numbers, to specify how many numbers should come after the decimal point. The iomanip header file needs to be included.

10. The iostream header file needs to be included to be able to use fixed and showpoint manipulators.

11. The setw function is used to specify the number of columns needed to format the next output expression. The iomanip header file needs to be included.

12. 9.00 ^ 3.20 = 1131.30
      5.0^2.5 = 55.90
      sqrt(48.35) = 6.95
      static_cast<int>(sqrt(pow(y, 4))) = 10
      Length of str = 47

13. To use the functions peek and putback in a program the iostream header file needs to be included.

14a. discard = ‘#’, num = 34
14b. discard = ‘#’, num = UNDEFINED; Input failure
14c. discard = ‘#’, num = 34

15.  getline(cin, name) reads the entire line of input into the identifier name from the input stream until it gets to a newline \n character.

16. cout << setfill('*') << setw(35) << '';

17a. height = 5.4, name = “Christy Miller”
17b. height  = 5.4, name = “”

18a. height  = 5.4, name = “Christy Miller”
18b. height  = 5.4, name = “Christy Miller”

19. #include <iostream>
    #include <fstream>

    using namsespace std;

    int main()
    {
        double length, width;

        ifstream infile;
        ofstream outfile;

        infile.open("input.txt");
        outfile.open("output.txt");

        infile >> length >> width;
        outfile << "Area = " << length * width
                << ", Perimeter = " << 2 * (length + width) << endl;

        infile.close();
        outfile.close();

        return 0;
    }

20. An input stream would likely enter the fail state when the data type declared in the program is different from the sequence of character in the input stream, for instance trying to extract a ‘.’ into a identifier whose type is an integer. When an input stream enters the fail state, it becomes unresponsive and can no longer be used. It would need to be restarted using the clear function on the input stream variable.

21. The fstream header file needs to be included.

22. infile.open("employee.dat");

23a. The contents of the file in inputFile.dat remains unchanged.
23b. outFile.dat now contains the results of the calculations made in the program.
23c. outFile.dat is overwritten with the results of the calculation the 100 numbers prior to the execution of the program ceases to exist.
23d.If outFile.dat did not exist before the program executed it is created and the results of the calculation	is written to it.

24. infile >> acctNumber >> accountType >> balance;

25a. outfile.open(“sales.dat”);
25b. outfile << fixed << showpoint << setprecision(2);
25c. revenue = numOfJuiceBottlesSold * costOfaJuiceBottle;
25c. outfile << “Number of Juice Bottles Sold: ” << numOfJuicBottlesSold << “, Cost of a Juice Bottle: ” << costOfaJuiceBottle << “, Revenue: ” << revenue <<endl;
25d. outfile.close();