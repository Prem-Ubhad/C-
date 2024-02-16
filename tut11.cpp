#include<iostream>
using namespace std;

struct myStructure{
  int myNum;
//   string myString;
};

int main()
{
  
   struct {
  string brand;
  string model;
  int year;
} myCar1, myCar2; // We can add variables by separating them with a comma here

// Put data into the first structure
myCar1.brand = "BMW";
myCar1.model = "X5";
myCar1.year = 1999;

// Put data into the second structure
myCar2.brand = "Ford";
myCar2.model = "Mustang";
myCar2.year = 1969;  

// Print the structure members
cout<< myCar1.brand << " " << myCar1.model << " " << myCar1.year <<endl;
cout<< myCar2.brand << " " << myCar2.model << " " << myCar2.year <<endl;



// struct myStructure harry;
// // Assign values to members of myStructure
// harry.myNum = 1;    
// // myStructure.myString = "Hello World!";

// // Print members of myStructure
// cout << harry.myNum << "\n";
// // cout << myStructure.myString << "\n";
   return 0;
}