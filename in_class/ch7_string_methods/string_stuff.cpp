#include <iostream>
#include <string>
using namespace std;

int main()
{

string s1,s2,s3,s4;


s1 = "Matt";
s2 = "Welz";
s3 = s1 + " " + s2;
s4 = "mountain";

cout << "The concatenation of the two strings " << s1 << " and " << s2 << " with a space in the middle is: " << s3 << endl; 

int length = s3.length();

cout << "A loop to print out the characters in my string individually: " << endl;
for (int i = 0; i < length; i++)
    cout << s3[i] << endl;

cout << "The first instance of \"We\" in the string is at position: " << s3.find("We" ) << endl;
cout << "The first instance of \"t\" in the string from position 3 on is found at: " <<s3.find("t",3) << endl;

s3.insert(5,"Taco ");
cout << "The result of inserting \"Taco \" at position 5 is: " << s3 << endl;

cout << "Before the swap we have " << s3 << " and " << s4;
s3.swap(s4);
cout << " and after the swap we have " << s3 << " and " << s4 << "." << endl;

cout << "Printing out a substring of length 3 beginning at position 3: " << s3.substr(3,3) << endl;

cout << "What happens if I look for a substring not present in my string: " << s3.find("quiche") << endl;

cout << "Checking that erase actually erases: " << s3.erase() << endl;

return 0;
}