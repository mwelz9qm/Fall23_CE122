//Homework 6 

#include<iostream>
#include<cmath>

using namespace std;

void printStats(double x1, double x2, double x3, double x4, double x5); //prototype for function to print mean and std
void calculateSumAndProduct(double x, double y, double &s, double &p); //prototype for production to return sum and product by reference


int main()
{

    double a,b,c,d,e,sum, prod;
    cout << "Enter five numbers that you want the standard deviation and mean of: ";
    cin >> a >> b >> c >> d >> e;
    printStats(a,b,c,d,e);
    cout << endl;

    cout << "Enter two numbers that you want the sum and product of: ";
    cin >> a >> b;
    calculateSumAndProduct(a,b,sum,prod);
    cout << "The sum and product, respectively, of your two numbers are " << sum << " and " << prod << "." << endl;


    return 0;
}

void printStats(double x1, double x2, double x3, double x4, double x5)
{
    double m, std;

    m = (x1 + x2 + x3 + x4 + x5)/5;
    std = sqrt((pow(x1 - m,2) + pow(x2 - m,2) + pow(x3 - m,2) + pow(x4 - m,2) + pow(x5 - m,2))/5);
    cout << "The mean is " << m << " and the standard deviation is " << std <<"." << endl;
}

void calculateSumAndProduct(double x, double y, double &s, double &p)
{
    s = x + y;
    p = x * y;

}



