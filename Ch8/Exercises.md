1. Mark the following statements as true or false.
    1. true
    2. true
    3. false
    4. true
    5. false
    6. false
    7. false
    8. false
    9. true
    10. true
    11. false
    12. false
2. `currentBalance` is the array name, array size is 91, data type of each array component is `double`, range of values
   for the index of the array is [0–90], indice of the first element is 0. indice of the middle element is 44 and 45,
   and indice of the last element is 90.
3. Identify error(s), if any, in the following array declarations. If a
   statement is incorrect, provide the correct statement.
    1. `int primeNum[99];`
    2. `int testScore[0];`
    3. `string names[60];`
    4. `int list100[0..99];` should be `int list100[100];` instead;
    5. `double[50] gpa;` should be `double gpa[50]` instead;
    6. ```c++
       const double LENGTH = 26,
       double list[LENGTH - 1];
       ```
    7. ```c++
       const long SIZE = 100
       int list[2 * SIZE]
       ```
4. Determine whether the following array declarations are valid. If a
   declaration is invalid, explain why.
    1. `int list[61];`
    2. `strings names[20]` should be `string`
    3. `double gpa[]` does not have a size.
    4. `double[-50] ratings[];` syntactically the data type shouldn't be succeded by square brackets and the size of the
       array should be in the second pair of square brackets at the end of the declaration, lastly the size should be a
       non-negative integer.
    5. `string flower[35];`
    6. ```c++
       int SIZE = 10;
       double sales[2 * SIZE];
       ```
    7. ```c++
       int MAX_SIZE = 50;
       double sales[100 - 2 * MAX_SIZE];
       ```
5. The valid range for the index of an array of size 65 is [0-64]. The index of the first element is 0, the index of the
   middle element is 32, and the index of the last element is 64.
6. Write C++ statement(s) to do the following:
    1. `int alpha[50];`
    2. ```c++
       for (int i = 0; i < 50; i++)
           alpha[i] = -1;
       ```
   3. `cout << alpha[0] << endl;`
   4. `alpha[24] = 62;`
   5. `alpha[9] = 3 * alpha[49] + 10;`
   6. ```c++
      for (int i = 0; i < 50; i++)
          if (i % 2 == 0 || i % 3 == 0)
              cout << alpha[i] << endl;
      ```
   7. `cout << alpha[49] << endl;`
   8. ```c++
      for (int i = 1; i <= 50; i++) {
          cout << alpha[i - 1];
          if (i % 15 == 0)
              cout << endl;
      } 
      ```
   9. ```c++
      for (int i = 0; i < 50; i + 2)
         alpha[i]++;
      ```
   10. ```c++
       int diffAlpha[49];
       for (int i = 1; i < 50; i++)
           diffAlpha[i - 1] = alpha[i] - alpha[i - 1];
       ``` 
7. ```terminaloutput
   0.00 1.50 9.00 28.50 66.00
   64.50 1.50 30.00 28.50 66.00
   ```
8. ```terminaloutput
    0 2 6 12 0 2 8 9
   ```
9. `int list[8] = {1, 2, 2, 4, 8, 32, 224, 6944};`
10. `int myList[6] = {2.5, 2.5, 5, 15, 30, 75}`
11. ```c++
    int myList[10];

    for (int i = 0; i < 10; i++)
        myList[i] = i;
    ```
12. ```c++
    int intList[5];

    for (int i = 0; i < 5; i++)
        cin >> intList[i];

    for (int i = 0; i < 5; i++)
        cout << intList[i] << " ";
    cout << endl;
    ```
    
13. Array index out of bound is when the index is less than 0 or greater than or equal to the size of the array. C++ does not check for array indices within bounds.
14. ```c++
    for (int i = 0; i < 9; i++)
        if (point[i + 1] >= point[i])
            cout  << "points[" << i << "] and points[" << (i + 1) << "] are out of order." << endl;
    ```
    > points[2] and points[3] are out of order.
    > 
    > points[7] and points[8] are out of order. 
15. ```c++
    double height[10] = {5.2, 6.3, 5.8, 4.9, 5.2, 5.7, 6.7, 7.1, 5.10, 6.0};
    
    int weight[7] = {120, 125, 137, 140, 150, 180, 210};

    char specialSymbols[] = {'$', '#', '%', '@', '&', '!', '^'};

    string seasons[4] = {"fall", "winter", "spring", "summer"};
    ```
16. Determine whether the following array declarations are valid. If a declaration
    is valid, determine the size of the array. 
    1. `int list[] = {18, 13, 14, 16};` size = 4
    2. `int x[10] = {1, 7, 5, 3, 2, 8}` size = 10
    3. `double y[4] = {2.0, 5.0, 8.0, 11.0, 14.0};` ***
    4. `double lengths[] = {8.2, 3.9, 6.4, 5.7, 7.3};` size = 5
    5. `int list[7] = {12, 13, 14, 16, , 8};` ***
    6. `string name[8] = {"John", "Lisa", "Chris", "Katie"};` size = 8
17. ```terminaloutput
    3 12 -25 72 0
    ```
18. ```c++
    int list[] = {3, 8, 10, 13, 6, 11};

    for (int i = 0; i < 6; i++)
        cout << list[i] << " ";
    cout << endl;

    for (int i = 0; i < 5; i++)
        list[i] = (list[i] - 3) * 3 * (i + 1);
    ```
19.  ```terminaloutput
     -5 0 10 60 360 600
     ```
20. ```terminaloutput
    alpha: 1 3 5 7 9 -1 2 5 8 11
    beta: -2 3 8 13 18 27 20 13 6 -1 45 33 21 9 -3
    ```
21. a, b, and e
22. a, b, and d
23. ```terminaloutput
    1 35700.00 714.00
    2 96800.00 1936.00 
    3 55000.00 1100.00
    4 72500.00 1450.00 
    5 87700.00 1754.00
    ```
24. ```c++
    for (int i = 0; i < 10; i++)
        inFile >> cars[i];

    int total = cars[0];
    int maxIndex = 0
    for (int i = 1; i < 10; i++) {
        total = total + cars[i];
        if (car[i] > cars[maxIndex])
            maxIndex = i;
    }

    cout << total << " cars were sold in the previous month." << endl;
    cout << "salesperson " << (maxIndex + 1) << " sold the most cars last month." << endl;
    ```
25. ```terminaloutput
    list: 810 0 270 180 90
    ```
26. ```terminaloutput
    Quantity Unit Cost     Amount 
        3         15.00      45.00
        5         20.00     100.00     
        2          5.00      10.00 
        8          3.00      24.00
        1         75.00      75.00
     Total due: $254.00 
    ```
27. ```terminaloutput
    1 3.50 10.70 235.51
    2 7.20 6.50 294.05
    3 10.50 12.00 791.68
    4 9.80 10.50 646.54
    5 6.50 8.00 326.73
    ```
28. The base address, which is the location of the first component of the array.
29. No, in C++ an array as an actual parameter cannot be passed by value to a function.
30. > 12, 50, 68, 30, 46, 5, 92, 10, 38
    > 
    > 5, 50, 68, 30, 46, 12, 92, 10, 38
    > 
    > 5, 10, 68, 30, 46, 12, 92, 50, 38
    > 
    > 5, 10, 12, 30, 46, 68, 92, 50, 38
    > 
    > 5, 10, 12, 30, 46, 68, 92, 50, 38
    > 
    > 5, 10, 12, 30, 38, 68, 92, 50, 46
    > 
    > 5, 10, 12, 30, 38, 46, 92 ,50, 68
    > 
    > 5, 10, 12, 30, 38, 46, 50, 92, 68
    > 
    > 5, 10, 12, 30, 38, 46, 50, 68, 92 
31. ```terminaloutput
    1 0 1 1 1 0 0 1 1
    ```
32. ```terminaloutput
    Cindy Blair
    Chris Johnson
    Sheila Mann
    ``` 
33. In the definition of `modifyList` you cannot use a range-based for loop. Because the size of `list` is unknown inside `modifyList`.
34. `bool flag = (name >= "Cynthia")` is not a valid expression. You cannot compoare c-strings using relational operators.
35. ```c++
    if (strlen(str1) >= strlen(str2))
        str1 = str2;
    ```
    ```c++
    if (str1 > str2)
        cout << "str1 > str2." << endl;
    ```
    Are both invalid because aggregate operations on arrays are not allowed. The only aggregate operation allowed on c-strings is I/O operations.
36. ```c++
    int j = 0;
    while (name[j] < 8)
        cout << name[j++];
    ```
    Does not output just `Shelly` but would most likely add some extra jargon because we exceed the last index in the printable characters in `Shelly` by 2.
37. ```c++
    strcpy(myStr, "Summer Vacation");
    cout << strlen(yourStr) << endl;
    strcpy(mystr, yourStr);
    int compare = strcmp(myStr, yourStr);
    ```
38. ```c++
    yourName = studentName;
    ```
    ```c++
    if (yourName == name)
        studentName = name;
    ```
    Are not valid operations because aggreate operations on c-strings are not allowed. `yourName == name` compares their addresses instead of comparing their individual characters.
39. ```c++
    double matrix[4][3] = {
        {2.5, 3.2, 6.0},
        {5.5, 7.5, 12.6},
        {11.25, 16.85, 13.45},
        {8.75, 35.65, 19.45}
    };
    ```
40. ```c++
    for (int i = 0; i < 3; i++)
        cin >> matrix[0][i];

    for (int i = 0; i < 4; i++)
        cout << matrix[i][2];

    cout << matrix[0][3];

    matrix[3][2] += 13.6;
    ```
41. Consider the following declarations: 
    ```c++
    const int CAR_TYPES = 5;
    const int COLOR_TYPES = 6;

    double sales[CAR_TYPES][COLOR_TYPES];
    ```
    1. `sales` has 30 components.
    2. sales has 5 rows.
    3. sales has 6 columns.
    4. To sum up the `sales` by `CAR_TYPES`, you'll need to sum up the individual rows.
    5. To sum up the `sales` by `COLOR_TYPES`, you'll need to sum up the individual columns.
42. ```c++
    const int ROW_SIZE = 10;
    const int COLUMN_SIZE = 20;

    int alpha[ROW_SIZE][COLUMN_SIZE];

    for (int i = 0; i < ROW_SIZE; i++)
        for (int j = 0; j < COLUMN_SIZE; j++)
            alpha[i][j] = 0;

    for (int i = 0; i < ROW_SIZE; i++)
        for (int j = 0; j < COLUMN_SIZE; j++)
        {
            if (i == 0)
                alpha[i][j] = 1;
            else
                alpha[i][j] = 2;
        }

    for (int i = 0; i < ROW_SIZE; i++)
        for (int j = 0; j < COLUMN_SIZE; j++)
        {
            if (j == 0)
                alpha[i][j] = 5;
            else
                alpha[i][j] = 2 * alpha[i][j - 1]; 
        }

    for (int i = 0; i < ROW_SIZE; i++)
    {
        for (int j = 0; j < COLUMN_SIZE j++)
            cout << alpha[i][j] << " ";
        cout << endl;
    }

    for (int j = 0; j < COLUMN_SIZE; j++)
    {
        for (int i = 0; i < ROW_SIZE; i++)
            cout << alpha[i][j] << " ";
        cout << endl;
    }
    ```
43. > [[0, 0, 0], [0, 0, 0], [0, 0, 0]]
    > 
    > [[0, 1, 2], [1, 2, 3], [2, 3, 4]] 
    > 
    > [[0, 0, 0], [1, 2, 3], [2, 4, 6]]
    > 
    > [[0, 2, 0], [2, 0, 2], [0, 2, 0]]
    > 
    > [[0, 2, 1], [0, 1, 2], [0, 0, 0]]
44. ```c++
    const int COLUMN_SIZE = 10;

    void readIn(int list[][COLUMN_SIZE], int rowSize);
    void sumRow(int list[][COLUMN_SIZE], int rowSize);
    void print(int list[][COLUMN_SIZE], int rwoSize);

    int main()
    {
        int flowers[28][COLUMN_SIZE];
        int animals[15][COLUMN_SIZE];
        int trees[100][COLUMN_SIZE];
        int inventory[30][COLUMN_SIZE];
    
        readIn(flowers, 28);
        readIn(animals, 15);
        readIn(trees, 100);
        readIn(inventory, 30);
        
        sumRow(flowers, 28);
        sumRow(animals, 15);
        sumRow(trees, 100);
        sumRow(inventory, 30);
        
        print(flowers, 28);
        print(animals, 15);
        print(trees, 100);
        print(inventory, 30);
    } 
    

    void readIn(int list[][COLUMN_SIZE], int rowSize)
    {
        for (int i = 0; i < rowSize; i++)
            for (int j = 0; j < COLUMN_SIZE; j++)
                cin >> list[i][j];
    }

    void sumRow(int list[][COLUMN_SIZE], int rowSize)
    {
        for (int i = 0; i < rowSize; i++)
        {
            int sum = 0;
            for (int j = 0; j < COLUMN_SIZE; j++)
                sum += list[i][j];
            cout << "Sum of row #" << (i + 1)  << " = " << sum << endl;
        }
    }

    void print(int list[][COLUMN_SIZE], int rowSize)
    {
        for (int i = 0; i < rowSize; i++)
        {
            for (int j = 0; j < COLUMN_SIZE; j++)
                cout << list[i][j] << " ";
            cout << endl;
        }
    }
    ```