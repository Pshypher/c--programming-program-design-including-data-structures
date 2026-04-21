Chapter 7

1a. true
1b. false
1c. true
1d. true
1e. false
1f. true
1g. true
1h. true
1i. false
1j. false

2a. enum flowerType {ROSE, DAISY, CARNATION, FREESIA, GARDENIA, ALLIUM, TULIP, IRIS, SUNFLOWER, LILAC, ORCHID}
2b. flowerType flower;
2c. flower = TULIP;
2d. flower = IRIS;
2e. flower = static_cast<flowerType>(static_cast<int>(flower) - 1);
2f. switch (flower)
    {
        case ROSE:
            cout << "Rose";
            break;
        case DAISY:
            cout << "Daisy";
            break;

            .
            .
            .

        case ORCHID:
           cout << "Orchid";
    }
2g. char ch;

    cout << "Enter the first letter of a flower type.";
cout << "(r|R)ose, (d|D)aisy, (c|C)arnation, (f|F)reesia, (g|G)ardenia, (a|A)llium, (t|T)ulip, (i|I)ris, (s|S)unflower, "
            << "(l|L)ilac, (o|O)rchid: " << endl;
    cin >> ch;
    cout << endl;

    switch(ch)
    {
        case 'r':
        case 'R':
            flower = ROSE;
            break;
        case 'd':
        case 'D':
            flower = DAISY;
            break;

            .
            .
            .

        case o:
        case O:
           flower = ORCHID;
    }

3. a and c are valid C++ statements .

4a. 4
4b.  GRAPE
4c. MANGO
4d. true
4e. Error, you cannot directly increment an enumerator.

5. void getFlower(flowerType& flower)
   {
       char ch;

       cout << "Enter the first letter of a flower type." << endl;
       cout << "(r|R)ose, (d|D)aisy, (c|C)arnation, (f|F)reesia, (g|G)ardenia, (a|A)llium, (t|T)ulip, (i|I)ris, (s|S)unflower, "
            << "(l|L)ilac, (o|O)rchid: " << endl;
       cin >> ch;
       cout << endl;

       switch(ch)
       {
           case 'r':
           case 'R':
               flower = ROSE;
               break;
           case 'd':
           case 'D':
               flower = DAISY;
               break;

               .
               .
               .

           case o:
           case O:
               flower = ORCHID;
       }
   }

6. void printFlower(flowerType flower)
   {
       switch (flower)
       {
           case ROSE:
               cout << "Rose";
                break;
           case DAISY:
               cout << "Daisy";
               break;

               .
               .
               .

           case ORCHID:
               cout << "Orchid";
       }
   }

7. An anonymous type cannot be returned or passed as a parameter into a function, you cannot compare values of an anonymous type with similar values of a different anonymous type.

8. enum quadrilateralType {SQUARE, RECTANGLE, RHOMBUS, TRAPEZOID, PARALLELOGRAM, QUADRILATERAL, KITE} quadrilateral;
9. We have an incorrect spelling “istream” on Line 1 should be “iostream” instead.

10. Incorrect spelling “strings” should be “string” on Line 2 also on Line 7 since we omitted the statement “using namespace std” we need to preceed the identifier “cout” on Line 7 with std::cout.

11. On Line 2 we have an incorrect spelling of the namespace “std” as “sdt”. Also on Line 9 we do not return an integer whereas the functionType was specified as int.

12. On Line 2 we try to declare a namespace “mySpace” but we add the keyword “using“ which shouldn’t be there, also on Line 12 the cast is wrong. Should be “mySpace::x = static_cast<int>(num);” instead.

13. On Line 8, the identifiers x and y are in a different namespace named aaa and belong to the scope of that namespace but we are trying to access their values without using the statement “using namespace aaa” or having the prefix of their namespace “aaa” and the scope resolution operator before the identifiers x and y.

14. On Line 2 we have an incorrect spelling for the header file should be “cmath” instead of “math”. Also on Line 3 “using nameSpace std” the keyword is “namespace” all lowercase.

15a. Sammer Vucation
15b. Temperary Projoct
15c. Nocial Sectwork

16a. Temporary > Storage
16b. Main < Memory
16c. run! = run!

17. Regular exercise
    Regular exercise and low fat diet
    33
    8
    8
    health insurance
    insurance
    Regular exercise can reduce health insurance $$$$.
    $ocial Nedia!!
    14
    Social Media!!

18a. 45
18b. “ we will “
18c. This spring we will drive across the country!
18d. This summer we will enjoy Caribbean cruise!