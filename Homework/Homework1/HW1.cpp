#include<iostream>
using namespace std;
//Matt Welz CE 122 HW1


int main()
{

    //problem 1

    cout << "******************************" << endl;
    cout << "* Homework 1                 *" << endl;
    cout << "* CE 122                     *" << endl;
    cout << "* Author: Matt Welz          *" << endl;
    cout << "* Due Date: September 6      *" << endl;
    cout << "******************************" << endl;

    //problem 2 -- iostream and namespace appear above, so this takes care of parts a - c

    int num1, num2, num3;
    num1 = 146;
    num2 = 72;
    num3 = -14;

    double average;
    average = (num1 + num2 + num3)/3;

    cout << "num1 is " << num1 << " and num2 is " << num2 << " and num3 is " << num3 <<  " and the average of those numbers is " << average << endl;


    //problem 3

    double quiz1, quiz2, quiz3, avg; //I don't specify the number of quizzes or if the quizzes should be an integer -- take your pick

    cout << "Please input the three quiz scores you want to find the average of " << endl;
    cin >> quiz1 >> quiz2 >> quiz3;
    avg = (quiz1 + quiz2 + quiz3)/3;
    cout << "The average of your quiz scores is " << avg << "." << endl;


    return 0;
}