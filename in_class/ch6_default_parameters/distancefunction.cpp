#include<iostream>
#include<cmath>

using namespace std;

double distance(double x1, double y1, double x2 = 0, double y2 = 0); //using default parameters to set second point to (0,0) if not provided

int main()
{
    cout << "The distance between the points (1,3) and (2,7) is: " << distance(1,3,2,7) << endl;
    cout << "The distance between the point (1,3) and the origin is: " << distance(1,3) << endl; //use default params here
    return 0;
}

double distance (double x1, double y1, double x2, double y2)
{
    double dist;
    dist = sqrt(pow(x2 - x1,2) + pow(y2 - y1,2));
    return dist;
}