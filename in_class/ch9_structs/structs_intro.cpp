#include<iostream>
#include<string>

using namespace std;

 enum wallStyle{DRYWALL, PLASTER};

    //hopetype allows us to have records containing a variety of datatypes to represent a house
    struct homeType
    {
        string style;
        int numBedrooms;
        int numBaths;
        int yearBuilt;
        wallStyle wallType;
        double price;
        double tax;
    };

int main()
{  

    homeType myHouse;

    //setting the member variables for myHouse
    myHouse.style = "Cape Cod";
    myHouse.numBedrooms = 3;
    myHouse.numBaths = 2;
    myHouse.yearBuilt = 1950;
    myHouse.wallType = DRYWALL;
    myHouse.price = 456789.10;
    myHouse.tax = myHouse.price * .01;  //set house tax equal to 1% of home price

    //printing out some of the contents of my house

    cout << "Home style: " << myHouse.style << endl;
    cout << "Year built: " << myHouse.yearBuilt << endl;
    cout << "Purchase price: " << myHouse.price << endl;

    return 0;
}
