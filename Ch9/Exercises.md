1. Mark the following statements as true or false.
    1. false
    2. true
    3. false
    4. false
    5. true
    6. false
    7. false
    8. true
    9. true
    10. true
    11. true
2. ```c++
   struct computerType {
       string manufacturer;
       string modelType;
       string processorType;
       int ramGB;
       int hardDriveSizeGB;
       int yearOfManufacture;
       double price;
   };
   ```
3.  ```c++
    computerType computer;
    computer.manufacture = "Computer Corporation";
    computer.model = "Desk Top";
    computer.processorType = "Core I7";
    computer.ramGB = 12;
    computer.hardDriveSizeGB = 500;
    computer.yearOfManufacture = 2016;
    computer.price = 875.00;
    ```
4. ```c++
   struct houseType {
       string style;
       int numOfBedrooms;
       int numOfBathrooms;
       int numOfCarsGarage;
       int yearBuilt;
       int finishedSquareFootage;
       double price;
       double tax;
   };

   houseType oldHouse;
   houseType newHouse;

   oldHouse.style = "Two-story";
   oldHouse.numOfBedrooms = 5;
   oldHouse.numOfBathrooms = 3;
   oldHouse.numOfCarsGarage = 4;
   oldHouse.yearBuilt = 1975;
   oldHouse.finishedSquareFootage = 3500;
   oldHouse.price = 675000;
   oldHouse.tax = 12500;

   newHouse = oldHouse;
   ```
5. ```c++
    struct houseType {
       string style;
       int numOfBedrooms;
       int numOfBathrooms;
       int numOfCarsGarage;
       int yearBuilt;  
       int finishedSquareFootage;
       double price;
       double tax;
    };

   houseType firstHouse;
   houseType secondHouse;

   if (firsHouse.style == secondHouse.style && firHouse.price == secondHouse.price)
       cout << "true";
   else 
       cout << "false";
   ```  
6. ```c++
   struct fruitType {
       string fruitName;
       string color;
       int fat;
       int sugar;
       int carbohydrate;
   };
   ```
7. ```c++
   struct fruitType {
       string fruitName;
       string color;
       int fat;
       int sugar;
       int carbohydrate;
   };
   
   fruitType fruit;
   fruit.fruitName = "banana";
   fruit.color = "yellow";
   fruit.fat = 1;
   fruit.sugar = 15;
   fruit.carbohydrate = 22;
   ```
8. ```c++
   struct fruitType {
       string fruitName;
       string color;
       int fat;
       int sugar;
       int carbohydrate;
   };

   void getFruitInput(ifstream& infile, fruitType& fruit)
   {
       infile >> fruit.fruitName >> fruit.color >> fruit.fat >> fruit.sugar >> fruit.color;
   }

   void printFruitInfo(ofstream& outfile, const fruitType& fruit)
   {
       outfile << "name = " << fruitType.fruitName << endl;
       outfile << "color = " << fruitType.color << endl;
       outfile << "fat = " << fruitType.fat << endl;
       outfile << "sugar = " << fruitType.sugar << endl;
       outfile << "carbohydrate = " << fruitType.carbohydrate << endl;
   }
   ```
9. assignment and returning a struct from a function are the aggregate operations allowed on struct variables, that are not allowed on an array variable.
10. Mark the following statements as valid or invalid. If a statement is invalid, explain why.
    1. `student.gpa = 3.76;` is valid
    2. `student.name.last = "Anderson";` is valid
    3. `classList[1].name = student;` is not valid, name and student are different struct types.
    4. `classList[0].callNum = 0;` is not valid, callNum is member of the struct courseType, not studentType.
    5. `student.name = classList[10].name;` is valid;
    6. `course = classList[0];` is not valid. course and the individual components of classList are different structs
    7. `cout << classList[0]`; is not valid. Aggregate I/O operations are not allowed on struct types.
    8. ```c++ 
       for (int j = 0; j < 100; j++)
           classList[j].course = course
       ```
       is valid.
    9. `classList.name.last = " ";` is not valid. Individual components in an array are accessed by their index.
    10. `course.credits = studentType.course.credits` is not valid. Member access should be done on a variable of the struct type studentType not directly on the struct.
11. ```c++
    struct nameType {
        string first;
        string last;
    };

    struct courseType {
        string name;
        int callNum;
        int credits;
        char grade;
    };

    struct  studentType {
        nameType name;
        double gpa;
        courseType course;
    };

    studentType student;
    studentType classList[100];
    courseType course;
    nameType name;

    ifstream infile;
    
    classList[0].name.first = "Jessica";
    classList[0].name.last = "Miller";
    classList[0].gpa = 3.8;
    classList[0].course.name = "Data Structure";
    classList[0].course.callNum = 8340;
    classList[0].course.credits = 3;
    classList[0].course.grade = 'B';
    ```
12. ```c++
    struct nameType {
        string first;
        string last;
    };

    struct courseType {
        string name;
        int callNum;
        int credits;
        char grade;
    };

    struct  studentType {
        nameType name;
        double gpa;
        courseType course;
    };

    studentType student;
    studentType classList[100];
    courseType course;
    nameType name;

    course.name = "Programming I";
    course.callNum = 13'452; 
    course.credits = 3;
    course.grade = ""; 

    for (int i = 0; i < 100; i++)
        classList[i].gpa = 0.0;

    student = classList[30];

    classList[9].gpa = classList[9].gpa + 0.75;
    ```
13. Mark the following statements as valid or invalid. If a statement is  invalid, explain why.
    1. `newEmployee.name = "John Smith";` is not a valid statement. name, a struct whose type is nameType cannot be directly assigned a string.
    2. `cout << newEmployee.name;` is not a valid statement. Aggregate I/O operations are not allowed on structs.
    3. `employees[35] = newEmployee;` is a valid statement.
    4. ```c++
       if (employees[45].pID == 555334444)
           employees[45].performanceRating = 1;
       ```
       is valid.
    5. `employees.salary = 0;` is not valid statement. employees is an array whose component is an employeeType that contains the member `salary`, this implies that the component should be accessed first via an index, followed by the name of the field `salary` whose value is then set to 0
14. ```c++
     struct nameType {
        string first;
        string last;
    };

    struct employeeType {
        nameType name;
        int performanceRating;
        int pID;
        string dept;
        double salary;
    };

    employeeType newEmployee;
    newEmployee.name.first = "Mickey";
    newEmployee.name.last = "Doe";
    newEmployee.pID = 111111111;
    newEmployee.performanceRating = 2;
    newEmployee.dept = "ACCT";
    newEmployee.salary = 34567.78;
    ```
15. ```c++
    struct sportsType {
        string sportName;
        string teamName;
        int numberOfPlayers;
        double teamPayroll;
        double coachSalary;
    };

    sportsType soccer[20];
    ``` 
16. ```c++
    struct sportsType {
        string sportName;
        string teamName;
        int numberOfPlayers;
        double teamPayroll;
        double coachSalary;
    };

    int length = 20;
    sportsType soccer[length];

    for (sportsType team: soccer)
    {
        team.sportName = nullptr;
        team.teamName = nullptr;
        team.numberOfPlayers = 0;
        team.teamPayroll = 0.0;
        team.coachSalary = 0.0;
    }
    

    for (int i = 0; i < length; i++)
        cin >> soccer[i].sportName >> soccer[i].teamName >> soccer[i].numberOfPlayers >> soccer[i].teamPayroll 
            >> soccer[i].coachSalary;

    for (sportsType team: soccer)
    {
        if (team.teamPayroll + team.coachSalary >= 10'000'000)
            cout << team.teamName;
    }
    ``` 
17. ```c++
    struct sportsType {
        string sportName;
        string teamName;
        int numberOfPlayers;
        double teamPayroll;
        double coachSalary;
    };


    void getSportsData(sportsType& sport)
    {
        cin >> sport.sportName >> sport.teamName >> sport.numberOfPlayers >> sport.teamPayroll >> sport.coachSalary;
    }

    void printSportsData(const sportsType& sport)
    {
        cout << "Sports Name: " << sport.sportName << endl;
        cout << "Team Name: " << sport.teamName << endl;
        cout << "Number of Players: " << sport.numberOfPlayers << endl;
        cout << "Team Payroll: " << sport.teamPayroll << endl;
        cout << "Coach Salary: " << sport.coachSalary << endl;
    }

    sportsType soccer;
    getSportsData(sport);
    printSportsData(sport);
    ```
18. ```c++
    struct timeType {
        int hr;
        double min;
        int sec;
    };

    struct tourType {
        string cityName;
        int distance;
        timeType travelTime;
    };


    tourType destination;

    destination.cityName = "Chicago";
    destination.distance = 550;
    destination.travelTime.hr = 9;
    destination.travelTime.min = 30;
    destination.travelTime.sec = 0;

    void printTourData(tourType tour)
    {
        cout << "City: " << tour.cityName << endl;
        cout << "Distance: " << tour.distance << " miles." << endl;
        cout << "Time: " << tour.travelTime.hr << " hours, " << tour.travelTime.min << " minutes, "
            << tour.travelTime.sec << " seconds." << endl;
    }

    tourType getTourData()
    {
        tourType tour;
        cin >> tour.cityName >> tour.distance >> tour.travelTime.hr >> tour.travelTime.min >> tour.travelTime.sec;
        return tour;
    }

    void getTourData(tourType& tour)
    {
        cin >> tour.cityName >> tour.distance >> tour.travelTime.hr >> tour.travelTime.min >> tour.travelTime.sec;
    }
    ```