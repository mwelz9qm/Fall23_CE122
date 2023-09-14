#include<iostream>
#include<string>

using namespace std;

int main(){
    
    //problem 1
    double num1, num2, num3, num4, num5;
    int sumAsInt;
    cout << "Please enter five decimal numbers: " << endl;
    cin >> num1 >> num2 >> num3 >> num4 >> num5;
    sumAsInt = num1 + num2 + num3 + num4 + num5;
    cout << "The sum of your five numbers converted to an integer is: " << sumAsInt << endl;

    //problem 2
    double weightKg, weightLb;
    cout << "Please enter a weight in kg that you want converted to pounds" << endl;
    cin >> weightKg;
    weightLb = weightKg * 2.2;
    cout << weightKg << " kilograms is equivalent to " << weightLb << " pounds" << endl;

    cin.ignore(100, '\n'); //including this so that my last "enter" is cleared from input stream before the next problem

    //problem 3
    string name;
    cout << "Hi there, what's your name? " << endl;
    getline(cin, name);
    cout << "Nice to meet you " << name << "! Thanks for using my code." << endl;

    //problem 4
    double height;
    char ch;
    //already declared a string variable called name above
     cout << "What do we think the values of height, ch, name will be given the code below if we enter '6.3 Jose Silva' ?" << endl;
     cin >> height;
     cin.get(ch);
     getline(cin, name);
     cout << "height = " << height << ", ch = " << ch << ", name = " << name << endl;

     cout << "What about if the input is: "<< endl;
     cout << "6.3" << endl;
     cout << "Jose Silva" << endl;
     cin >> height;
     cin.get(ch);
     getline(cin, name);
     cout << "height = " << height << ", ch = " << int(ch) << ", name = " << name << endl;


    return 0;
}