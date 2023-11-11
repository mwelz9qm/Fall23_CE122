//Homework 7 Solutions

#include<iostream>

using namespace std;


enum dayType{Monday, Tuesday, Wednesday, Thursday, Friday, Saturday, Sunday};
enum triangleType{scalene, isosceles, equilateral, noTriangle};

void problem1();
void problem2();
triangleType triangleShape(double a, double b, double c);

int main()
{


    int choice;
    cout << "Do you want to run problem 1 or problem 2 (Q to quit)?" << endl;
    cin >> choice;
    while(cin)
    {
        if (choice == 1)
            problem1();
        else
            problem2();    
        cout << "Do you want to run problem 1 or problem 2 (Q to quit)?" << endl;
        cin >> choice;
    }
    return 0;
}

//HW7 problem 1

void problem1()
{
    int dayInt;
    dayType day; //variable representing the day of the week enum

    //read an int 1-7
    cout << "Pick a day by selecting an integer (Monday = 1, Tuesday = 2, etc...):";
    cin >> dayInt;
    // substract 1 from the int so the range is 0-6 and convert to dayType
    day = (dayType) (dayInt - 1);
    switch(day)
    {
        case Monday:
        cout << "You chose Monday for your day of the week. " << endl;
        break;
        case Tuesday:
        cout << "You chose Tuesday for your day of the week. " << endl;
        break;
        case Wednesday:
        cout << "You chose Wednesday for your day of the week. " << endl;
        break;
        case Thursday:
        cout << "You chose Thursday for your day of the week. " << endl;
        break;
        case Friday:
        cout << "You chose Friday for your day of the week. " << endl;
        break;
        case Saturday:
        cout << "You chose Saturday for your day of the week. " << endl;
        break;
        case Sunday:
        cout << "You chose Sunday for your day of the week. " << endl;
        break;

    }
}
 
    //Problem 2
    void problem2()
    {
        double x,y,z;
        triangleType myTriangle; //variable representing my triangle's shape
        cout << "Enter the three sides of your triangle, separated by spaces";
        cout << "(i.e. in the form 8 9 17): " << endl;
        cin >> x >> y >> z;
        //call the triangleShape functions which classifies the triangle
        myTriangle = triangleShape(x,y,z);
        switch(myTriangle)
        {
            case equilateral:
            cout << "Your triangle is equilateral." << endl;
            break;
            case isosceles:
            cout << "Your triangle is isosceles." << endl;
            break;
            case scalene:
            cout << "Your triangle is scalene." << endl;
            break;
            default:
            cout << "Your sides don't correspond to an actual triangle. " << endl;
            }


    }

   triangleType triangleShape(double a, double b, double c)
   {
        if (a == b && a == c) // all sides equal
            return equilateral;
        else if ( (a + b <= c) || (a + c <= b) || (b + c) <= a) // a third side bigger than sum of two sides
            return noTriangle;
        else if (a == b || a == c || b == c) // exactly two equal sides
            return isosceles;
        else        // valid triangle but no pairs of sides are equal
            return scalene;

   }


