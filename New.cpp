#include<iostream>
using namespace std;

typedef struct Student{
    string Name;
    double RollNo;
}st;

int main()
{
   st Prem;
   Prem.Name = "Prem";
   Prem.RollNo = 2230331372017;
   cout<<"The name of Student is "<<Prem.Name<<endl;
   cout<<"The Roll No. of Student is "<<Prem.RollNo;

   return 0;
}