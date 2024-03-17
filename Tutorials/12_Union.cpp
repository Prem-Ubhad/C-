#include<iostream>
using namespace std;

union employee{
    float salary;
    char car;
     int ranking;
   };
   //  Union is used for better memory management all the datatype shares the memory. 
   // If a datatype is assigned a value it will occupy the memory 
   // after that if another datatype is assigned a value it will overwrite the previous datatype
int main()
{
   union employee harry;
    harry.salary  = 25000;
    harry.car ='A';
    harry.ranking = 25;
    cout<< harry.car<<endl;
   return 0;
}