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
    
    ofstream outfile;
    outfile.open("prettytable.txt");


    cout << left;
    cout << setw(10) << "name " << setw(10) << "city " << setw(10) << "state " << endl;
    cout << setw(10) << name1 << setw(10) << city1 << setw(10) << state1 << endl;
    cout << setw(10) << name2 << setw(10) << city2 << setw(10) << state2 << endl;

    outfile << left;
    outfile << setw(10) << "name " << setw(10) << "city " << setw(10) << "state " << endl;
    outfile << setw(10) << name1 << setw(10) << city1 << setw(10) << state1 << endl;
    outfile << setw(10) << name2 << setw(10) << city2 << setw(10) << state2 << endl;

    return 0;
}