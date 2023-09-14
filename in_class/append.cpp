#include<iostream>
#include<fstream>

using namespace std;

int main()
{
ofstream outFile;

outFile.open("prettytable.txt", ios::app);

outFile << "Just appended something" << endl;



return 0;

}


