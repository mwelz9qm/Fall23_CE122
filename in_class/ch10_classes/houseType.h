#pragma once

#include<iostream>
#include<string>

using namespace std;

//definition of our houseType class
class houseType
{
    private:
    string style;
    int yearBuilt;
    double price;

    public:
    void setHouseInfo(string s, int y, double p); //setter function to set the data for an object
    void print(); //print the house info
    string getStyle(); //getter to return style
    int getYear(); //getter to return year
    double getPrice(); //getter to return prce
};

//now for the function definitions

void houseType::setHouseInfo(string s, int y, double p)
{
    style = s;
    if (y <= 2023)  //check if the year is not in the future
        yearBuilt = y;
    else
        yearBuilt = 2023; 
    if (p >= 0) //make sure the price isn't negative
        price = p;
    else
        price = 0;
}


void houseType::print()
{
    cout << "*****************************" << endl;
    cout << "House Stye: " << style << endl;
    cout << "Year Built: " << yearBuilt << endl;
    cout << "Price: " << price << endl;
    cout << "*****************************" << endl;
}

string houseType::getStyle()
{
    return style;
}

int houseType::getYear()
{
    return yearBuilt;
}

double houseType::getPrice()
{
    return price;
}