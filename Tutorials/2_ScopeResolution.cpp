#include<iostream>
using namespace std;
int c = 25;
int main()
{
   int a , b, c ;
   cout<<"Enter the value of a : ";
   cin>>a;
   cout<<"Enter the value of b : ";
   cin>>b;
   c = a+b;
   cout<<"The sum of a and b is : "<<c<<endl;
   cout<<"The global value of c is : "<<::c;
   // :: is scope resolution Operator
   return 0;
}