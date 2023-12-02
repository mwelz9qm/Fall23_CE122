#include<iostream>
#include<string>
#include<fstream>

using namespace std;

//problem 1 stuff
//defining my computerType struct
struct computerType
{
    string manufacturer;
    string processor;
    int ram;
    int hardDriveSize;
    int yearBuilt;
    double price;
};

void setComputer(computerType &computer); // function to see computer data in a struct
void printComputer(const computerType &computer); //function to print computer data

//problem 2 stuff

struct studentData
{
    string first;
    string last;
    double quizScores[5];
    double quizAverage; 
};

void printStudent(const studentData &student); //function to take a student record and print it


int main()
{
    //problem 1 test
    computerType myComputer;  //declare a computerType
    setComputer(myComputer); //call function to fill struct
    printComputer(myComputer); //call function to print struct data

    //problem 2

    //prep to read in data
    ifstream inFile;
    inFile.open("studentdata.txt");
    //declare and array of students
    studentData students[5];
    
    //read data from file into structs making up the array
    for (int i = 0; i < 5; i++)
        {
            double sum = 0;
            inFile >> students[i].first >> students[i].last; //store name in struct
            for (int j = 0; j < 5; j++) //loop to grab quiz scores and start computing the avg
                {
                    inFile >> students[i].quizScores[j];
                    sum += students[i].quizScores[j];
                }
            students[i].quizAverage = sum / 5.0;
            inFile.ignore(100,'\n'); //ignoring the major string included in the file
        }
    
    //print all the data we just read into structs
    cout << "All student records that were read in: " << endl;
    for (int i = 0; i < 5; i++)
        printStudent(students[i]);

    inFile.close();



    return 0;
}


    void setComputer(computerType &computer)
    {
    cout << "Who is the manufacturer of your computer?" <<endl;
    cin >> computer.manufacturer;
    cout << "What kind of processor does your computer have?"<<endl;
    cin >> computer.processor;
    cout << "How many GB of RAM does it have?"<<endl;
    cin >> computer.ram;
    cout << "How big (in GB) is the hard drive?"<<endl;
    cin>> computer.hardDriveSize;
    cout << "What year was your computer built?"<<endl;
    cin >> computer.yearBuilt;
    cout << "What was the price of your computer?"<<endl;
    cin >> computer.price;
    cout << "********************" << endl;
    }

    void printComputer(const computerType &computer)
    {
        cout << "Here is the data we collected about your computer: " << endl;
        cout << "Manufacturer: " << computer.manufacturer << endl;
        cout << "Processor: " << computer.processor << endl;
        cout << "RAM (in GB): " << computer.ram << endl;
        cout << "Hard Drive Size (in GB): " << computer.hardDriveSize << endl;
        cout << "Year Built: " << computer.yearBuilt << endl;
        cout << "Price: " << computer.price << endl;
    }

    void printStudent(const studentData &student)
    {
        cout << "************************" << endl;
        cout << "Student Name: " << student.first << " " << student.last << endl;
        cout << "Quiz Scores: ";
        for (int i = 0; i < 5; i++)
            cout << student.quizScores[i] << " ";
        cout << endl;
        cout << "Quiz Average: " << student.quizAverage << endl; 
        cout << "************************" << endl << endl;

    }