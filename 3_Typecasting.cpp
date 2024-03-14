#include<iostream>
using namespace std;
int main()
{
    // *************************float, double, long double Literals********************
   float d = 34.6f;
   long double c = 34.5L;
   cout<<"Size of 34.6 is : "<<sizeof(34.6)<<endl;
   cout<<"Size of 34.6f is : "<<sizeof(34.6f)<<endl;
   cout<<"Size of 34.6F is : "<<sizeof(34.6F)<<endl;
   cout<<"Size of 34.6l is : "<<sizeof(34.6l)<<endl;
   cout<<"Size of 34.6L is : "<<sizeof(34.6L)<<endl<<endl;
    ;
// *********************************TYPECASTING************************************

    float x = 25.6;
    int y = 45;
    cout<<"Typecasting float to int, we get : "<<(int)x<<endl;
    cout<<"Typecasting float to int, we get : "<<int(x)<<endl;
    cout<<"Typecasting int to ,float we get : "<<(float)y<<endl;
    cout<<"Typecasting int to float, we get : "<<float(y)<<endl<<endl;

    // ********************************Reference Variables*****************************

    int f = 56;
    int &l = f;
    cout<<f<<endl;
    cout<<l<<endl;
   return 0;

}