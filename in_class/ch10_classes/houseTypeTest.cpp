#include "houseType.h"

int main()
{
    //instantiate objects of houseType
    houseType myHouse,yourHouse;

    //fill myHouse with user data
    myHouse.setHouseInfo("Ranch", 1970, 409000);
    //print myHouse data
    myHouse.print();
    //assign myHouse data to yourHouse
    yourHouse = myHouse;
    //print to confirm data was passed to yourHouse
    yourHouse.print();
    //change the yourHouse data to something else
    yourHouse.setHouseInfo("Split-level", 1978, 499000);
    //check the changes went through
    yourHouse.print();
    //check the getters individually
    cout << "Checking the getter returns the right thing for style: " << yourHouse.getStyle() << endl;
    cout << "Checking the getter returns the right thing for year built: " << yourHouse.getYear() << endl;
    cout << "Checking the getter returns the right thing for price: " << yourHouse.getPrice() << endl;






    return 0;
}