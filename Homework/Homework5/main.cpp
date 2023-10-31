//Homework 5
//CE 122
//Matt Welz

#include<iostream>
#include<string>
#include<fstream>
using namespace std;

//just making the individual homework problems their own functions and then building a menu to pick the problem
void problem1();
void problem2();
void problem3();
void problem4();

//the "real" functions we were supposed to build for this assignment
bool isVowel(char ch);  //returns true/false if a character is a vowel or not ... input: char, output: bool
int countVowels(); // looks at each character in a string and counts whether it's a vowel or not input: none(user is prompted within function), output: integer

int main()
{
   bool stillRun = true; //setting up the loop and menu
   char choice;
   
   while(stillRun)
   {
    cout << "Select the problem you want to run (1-4).  Q to quit: ";
    cin >> choice;
    switch (choice)
    {
        case '1':
            problem1();
            break;
        case '2':
            problem2();
            break;
        case '3':
            problem3();
            break;
        case '4':
            problem4();
            break;
        default:
            stillRun = false;
   }
   }
    return 0;
}


void problem1()
{
    ofstream outFile;
    outFile.open("primes.txt");
    bool isPrime;
    for (int i = 2; i <= 2000; i++)  //work through each number from 2 to 2000
    {
    isPrime = true; //default to true and if i has a divisor (below), it's set to false
    
        for (int j = 2; j < i; j++)  //this loop checks to see if anything between 2 and i - 1 divides i, if so, not a prime!
        {
            if (i%j == 0) // if j divides i evenly, the remainder will be 0
                {
                    isPrime = false;  //if j divides i then we don't have a prime
                    break;
                }

        }
    if (isPrime)                //if the isPrime flag stayed true, then we have a prime so print it out
        outFile << i << endl;
        
    }

    outFile.close();
}

void problem2()
{
    int n,remainder;
    int sum = 0;

    cout << "Please enter an integer and I'll return it's individual digits: ";
    cin >> n;

    if (!cin)
        cout << "You didn't enter an integer!" << endl;   //check for invalid input
    else
    {
        //the gameplan is to keep taking remainder after dividing by 10 -- that gives a digit -- until our quotient whittles down to 0            
        remainder = n % 10;                                  
        sum = sum + remainder;
        cout << "Your digits are: " << remainder << " ";
        n = n / 10;
        while (n!=0)
        {
            remainder = n % 10;
            sum = sum + remainder;
            cout << remainder << " ";
            n = n / 10;
        }
        cout << endl;
        cout << "The sum of your digits is: " << sum << endl;
    }
    cin.clear();             //resetting cin in case of bad input
    cin.ignore(100,'\n');
}

void problem3()
{
    int x, originalx;
    int counter = 0;
    cout << "Enter the positive integer you want me to find the Collatz sequence for: ";
    cin >> x;
    originalx = x;
    if (!cin)  //first we look for bad input
        cout << "You didn't enter an integer! " << endl;
    else if (x < 1)
        cout << "You didn't enter a positive integer!" << endl;
    else
    {
        while (x!=1)    //we keep dividing by 2 or multiplying by 3 and adding 1 until the number shrinks down to 1
        {
            if (x % 2 == 0)   // this true when x is even
                x = x/2;
            else
                x = 3*x +1;
            cout << x << " ";
            counter ++;
        }
        cout << endl << "Your Collatz sequence for " << originalx << " has " << counter << " terms." << endl;
    }
    cin.clear(); //resetting cin in case of bad input
    cin.ignore(100,'\n');
}

void problem4()
{

    countVowels();  //this whole problem was the functions

}

bool isVowel(char c)   //could use if statements or some other tricks, but I kept the check brute forces
{
    switch (c)
    {
    case 'a':
    case 'e':
    case 'i':
    case 'o':
    case 'u':
    case 'A':
    case 'E':
    case 'I':
    case 'O':
    case 'U':
        return true;  //if any of the above happen it's true, otherwise, false
    default:
        return false;
    }
}

int countVowels()
{
    string str;
    int counter = 0;
    cout << "Enter a string of characters and I'll return the number of vowels it contains: ";
    cin >> str;
    int length = str.length();   //find the length of the string so we can loop over it
    for (int i = 0; i < length; i++)
    {
        if (isVowel(str[i]))   //check if the ith character in the string is a vowel using our other function.  If so, add 1 to the counter.
            counter++;
    }
    cout << "You entered a total of " << counter << " vowels." << endl;
    cin.clear();            //resetting cin in case of bad input
    cin.ignore(100,'\n');
    return counter;
}

