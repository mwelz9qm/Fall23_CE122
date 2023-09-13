#include<iostream>
#include<iomanip>
#include<fstream>
#include<string>

using namespace std;

int main()
{
    string name1, name2,city1, city2, 
    state1, state2;

    name1 = "Matt";
    name2 = "Maria";
    city1 = "Durango";
    city2 = "Chicago";
    state1 = "Colorado";
    state2 = "Illinois";
    
    ofstream outFile;
    outFile.open("prettytable.txt");

    ifstream inFile;
    inFile.open("stuff.txt");
    double a,b,c;

    cout << left;
    cout << setw(10) << "name " << setw(10) << "city " << setw(10) << "state " << endl;
    cout << setw(10) << name1 << setw(10) << city1 << setw(10) << state1 << endl;
    cout << setw(10) << name2 << setw(10) << city2 << setw(10) << state2 << endl;

    outFile << left;
    outFile << setw(10) << "name " << setw(10) << "city " << setw(10) << "state " << endl;
    outFile << setw(10) << name1 << setw(10) << city1 << setw(10) << state1 << endl;
    outFile << setw(10) << name2 << setw(10) << city2 << setw(10) << state2 << endl;

    inFile >> a >> b >> c;
    
    outFile << setprecision(2) << fixed << right;
    outFile << setw(8) << a << setw(8) << b << setw(8) << c << endl;
    outFile << setw(8) << 2*a << setw(8) << 2*b << setw(8) << 2*c << endl;
    outFile << setw(8) << 3*a << setw(8) << 3*b << setw(8) << 3*c << endl;

    return 0;
}