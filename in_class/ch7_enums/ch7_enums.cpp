#include<iostream>

using namespace std;

int main()
{
    //declaring a colors type

    enum colors {red, orange, yellow, green, blue, violet};

    colors c1, c2; //variables get declared as usual

    c1 = blue; 
    cout << "The int associated with blue is: " <<c1 << endl;
    c2 = (colors) (c1  - 2); //assignments involving enums and integers directly need to be type cast -- this will assign yellow to c2
    cout <<"The int associated with yellow is: " << c2 << endl;
    if (c1 == blue)
        cout << "c1 is blue " << endl; // logic with enums is pretty intuitive
    
    if (c2 == 2)
        cout << "c2 is yellow " << endl; //we can compares our enum type with ints, we just can't ASSIGN directly to ints without typecasting
    
    enum vehicles {car = 7, truck, boat}; //car, truck, boat will now be associated with 7,8,9

    vehicles myTransport;

    myTransport = boat;

    if (myTransport == boat)
        cout << "The int associated with boat is " << myTransport << endl;


    return 0;
}