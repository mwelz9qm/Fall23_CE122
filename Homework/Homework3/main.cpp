#include<iostream>
#include<fstream>
#include<iomanip>
#include<string>

using namespace std;

int main()
{   

    // Problem 1
    ofstream outFile; //set up file to write to
    outFile.open("plotarea.txt");

    ifstream inFile; //set up file to read from
    inFile.open("plots.txt");

    string name, plot;
    double length, width;

    inFile >> name >> plot >> length >> width; //read in
    outFile << setprecision(2) << fixed; //write out
    outFile << setw(14) << name << setw(14) << plot << setw(14) << length << setw(14) << width << setw(14) << length * width << endl;
    inFile >> name >> plot >> length >> width;
    outFile << setw(14) << name << setw(14) << plot << setw(14) << length << setw(14) << width << setw(14) << length * width << endl;
    inFile >> name >> plot >> length >> width;
    outFile << setw(14) << name << setw(14) << plot << setw(14) << length << setw(14) << width << setw(14) << length * width << endl;
    //close out the files
    outFile.close();
    inFile.close();
    
    
    cout << "---Start of Problem 2 ---" << endl;
    cout << endl;
    
    //Problem 2
    double hours, wage, totalWage;
    cout << "Enter the number of hours you worked in the week and your hourly wage, ";
    cout << "separated by a space " << endl;
    cin >> hours >> wage;

    if (hours < 0 || wage < 0) // checking we don't get any negative inputs
        cout << "One of your inputs is negative and hence doesn't make sense.  Ending program. " << endl;
    else if (hours < 40) // computing wage if you worked less than 40 hours
    {
        totalWage = hours * wage;
        cout << "Your total weekly wage was " << totalWage << endl;
    }
    else //computing wage if you worked over time 
        // taking the normal wage for 40 hours, and then 1.5x for everything over 40
    {
        totalWage = 40 * wage + (hours - 40) * wage * 1.5;
        cout << "Your total weekly wage was " << totalWage << endl;
    }
    
    //Problem 3
    //using switch would have been nicer here, but just using if - then

    cout << endl;
    cout << "---Starting Problem 3 --" << endl;
    cout << endl;
    double a,b; //a,b are calculator inputs
    char operation; // the operation the user selects

    cout << "Enter two numbers and the operation (=, -, *, /) you want to calculate " << endl;
    cout << "For example, enter 9.8 3 / to divide 9.8 by 3 " << endl;
    cin >> a >> b >> operation;
    if (operation == '+')
    {
        cout << a << " " << operation << " " << b << " = " << a + b << endl;
    }
    else if (operation == '*')
    {
        cout << a << " " << operation << " " << b << " = " << a * b << endl;
    }
    else if (operation == '-')
    {
        cout << a << " " << operation << " " << b << " = " << a - b << endl;
    }
    else if (operation == '/')
    {
        if ( b == 0)
        {
            cout << "We can't divide by 0! " << endl;
        }
        else
        {
            cout << a << " " << operation << " " << b << " = " << a / b << endl;
        }
    }
    else
    {
        cout << "You didn't pick a valid operation! " << endl;
    }

    // Problem 4
    //using switch would have been nicer here, but just using if - then

    cout << endl;
    cout << "Starting Problem 4 now " << endl;
    cout << endl;

    double hoursParked; //number of hours parked at airport

    cout << "Enter the number of hours (decimal is fine) you were parked at the airpot" << endl;
    cin >> hoursParked;

    if (hoursParked < 0 || hoursParked > 24) //be sure usered entered valid number
    {
        cout << "You entered an invalid number of hours " << endl;
    }
    else if (hoursParked <= 3)    // go through the three cases
    {
        cout << "Your total parking fee is 5 dollars." << endl;
    }
    else if (hoursParked <= 9)
    {
        cout << "Your total parking fee is " << 6 * int(hoursParked + 1) << " dollars." << endl;

    }
    else
    {
        cout << "Your total parking fee is 60 dollars." << endl;
    }
    return 0;
}