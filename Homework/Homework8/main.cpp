#include<iostream>
#include<iomanip>

using namespace std;

void problem1();
void problem2();

int smallestIndex(const int list[], int l); //const is so the array can't be changed and l is the length

int main()
{
    int choice;
    cout << "Which problem do you want to run?  Choose 1 or 2. " << endl;
    while (cin >> choice && (choice == 1 || choice ==2))
    {
        switch (choice)
        {
        case 1:
        problem1();
        break;
        case 2:
        problem2();
        break;
        }
       cout << "Which problem do you want to run?  Choose 1 or 2. (q to quit) " << endl;
    }

    return 0;
}


void problem1()
{
    double myList[50]; //declare the array
    //initialize the first half of the array
    for (int i = 0; i < 25; i++)
        myList[i] = i*i;
    
    //initialize the second half of the array
    for (int i = 25; i < 50; i++)
        myList[i] = 2 * i;
    
    //print the array
    for (int i = 0; i < 50; i++)
    {
        cout << setw(5) << myList[i] << " ";
        if ((i + 1) % 10 == 0)  //adds a line every 10 elements
            cout << endl;
    }
}

void problem2()
{
    int length = 9; //fixing the length of my array
    int myList[9] = {8,10,6,7,6,12,3,14,29}; //the list I am testing against
    
    cout << "The index of my array with the smallest ineger is: " << smallestIndex(myList,length) << endl;
}

int smallestIndex(const int list[], int l)
{
    int minValue = list[0]; //var for tracking the smallest element in the array -- start with the first and adjust as needed
    int minIndex = 0;
    for (int i = 0; i < l; i++)
    {
        if (list[i] < minValue)  //if we come across a new smallest value, set the minValue and its location
            {
            minValue = list[i];
            minIndex = i;
            }
    }
    return minIndex;
}
