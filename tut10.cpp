#include<iostream>
using namespace std;
int main()
{
   // Pointers and Arrays
   int Roll_No[] = {2250, 2251, 2252, 2253};
   int* p = Roll_No;

   cout<<"The value of Roll_No[0] is "<<*p<<endl;
   cout<<"The value of Roll_No[1] is "<<*(p+1)<<endl;
   cout<<"The value of Roll_No[2] is "<<*(p+2)<<endl;
   cout<<"The value of Roll_No[3] is "<<*(p+3)<<endl;

   cout<< *(p++)<<endl; /*Here Roll_No[0] will be printed*/
   cout<< *(p)<<endl;/*Here Roll_No[1] will be printed as p has been incremented*/
   cout<< *(++p)<<endl;/*Here Roll_No[2] will be printed*/
   return 0;
}