#include<iostream>
#include<iomanip>
#include<cstdlib>
#include<ctime>

using namespace std;

//a function to print a matrix with num_rows and 5 columns
//remember since a matrix is a 2d array, it's passed by reference
//since I don't want to change the matrix, I'm holding it const
void printArray2D(const int arr[][5], int num_rows);

//fills my 2D array with random numbers, so I'm not holding it constant -- I want it to change
void fillArray2D(int arr[][5], int num_rows);

int main()
{
    
    //declare and intialize an array with 3 rows and 5 columns
    int matrix[3][5] = {{1,2,3,4,5},{6,7,8,9,10},{11,12,13,14,15}};
    printArray2D(matrix,3);

    cout << endl;
    //initialize a new array to be all zeros
    int matrix1[4][5] = {{0},{0},{0},{0}};
    //checking it really filled with zeros
    printArray2D(matrix1,4);

    // fill the array with random values
    fillArray2D(matrix1,4);
    cout << endl;
    printArray2D(matrix1,4);

    return 0;
}

void printArray2D(const int arr[][5], int num_rows)
{
    //iterate down rows
    for (int i = 0; i < num_rows; i++)
    {
        //iterate across columns
        for (int j = 0; j < 5; j++)
            cout << setw(5) << arr[i][j] << " ";
    //endl since we're about to start a new row
    cout << endl;
    }
}

void fillArray2D(int arr[][5], int num_rows)
{
    //prepping to fill with random numbers from 0 to 99
    srand(time(0));
    for (int i = 0; i < num_rows; i++)
    {
        for (int j = 0; j < 5; j++)
            arr[i][j] = rand() % 100;
    }
}