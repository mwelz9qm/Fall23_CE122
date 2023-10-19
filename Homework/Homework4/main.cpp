#include<iostream>

using namespace std;

int main()
{
    
    //problem 1
    double x1,x2,y1,y2,m,b;

    cout << "Enter coordinates of a point (x and then y)" << endl;
    cin >> x1 >> y1;

    cout << "Enter coordinates of another point (x and then y)" << endl;
    cin >> x2 >> y2;

    if (x1 == x2) //checking if the line is vertical
    {
        cout << "Your line is vertical with equation x = " << x1 << "." << endl;
    }
    else
    {
        m = (y2-y1)/(x2-x1); //finding the slope
        b = y1 - m * x1; //finding the y-intercept
        
        //checking to see if line is horizontal, increasing, or decreasing
        if (m == 0) 
        {
         
            cout << "Your line is horizontal with equation y = " << b << endl;
        }
        else{
        if ( m > 0)
        {
            cout << "Your line is increasing with equation y = " << m << "x";
        }
        else{
            cout << "Your line is decreasing with equation y = " << m << "x";
        }
        //formatting to add, subtract, or leave of b if it is 0 when printing
        if (b>0)
        cout << " + " << b << endl;
        else if(b<0)
        cout << " - " << -1*b << endl;
        else
        cout << endl;
        }

    }

//problem 2

int factorial = 1; //this will be what we used to multiply all the terms
int n; //user input for which factorial they want

cout << "The program computes n! for some nonnegative n.  Choose your n please: " << endl;
cin >> n;
if (n < 0) // if the user enters a negative value by mistake
    cout << "You chose a negative n -- d'oh!" << endl;
else //if user wants n! for positive n
{
    for (int i = 1; i <= n; i++)
        factorial = factorial * i;  // will multiple 1 * 2 * .... * n
    cout << "The value of n! is: " << factorial << endl;
}

//problem 3 
//this program prints a pyramid of stars

cout << "Enter the number of rows you'd like in the pyramid: ";
cin >>n;

for (int i = 1; i <=n; i++) //this loop handles the rows
{
    for (int j = 1; j <= n - i;j++) //this loop prints spaces before asterisks for the row
    cout << " ";

    for (int k = 1; k <= 2*i - 1; k++) //this loop prints the asterisks for the row
        cout << "*";
    cout << endl;
}

//problem 4
//this program asks the user for the number of terms to include in the approximation of pi

double sum = 0;
double term;

cout << "How many terms should be included in the estimation of pi? Enter a positive integer please." << endl;
cin >> n;
if (n <= 0)
    cout << "You entered an invalid number of terms!" << endl;
else
{
    for (int i = 1; i <= n; i++)  //total number of terms we want
    {
        term = 1/(2.0*i -1);
        if (i % 2 == 0)  //checks if i is even in which case we SUBTRACT
            sum = sum - term;
        else
            sum = sum + term; //handles when i is odd, so we want to ADD
    }
    sum = 4 * sum; //remember, the formula says to multiply by 4
    cout << "The approximation of pi is " << sum << "." <<endl;
}


    return 0;
}