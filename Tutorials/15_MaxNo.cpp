#include<iostream>
using namespace std;

int Max(int a, int b);
// int Max(int , int ); ---------> Acceptable

int main()
{
   int x, y;
   cout<<"Enter First Number "<<endl;
   cin>>x;
   cout<<"Enter Second Number "<<endl;
   cin>>y;
    cout<<"The larger no. is = "<<Max(x,y);
   return 0;
}

int Max(int a, int b){
    int c;
    if (a>b)
    {
        c = a;
    }
    else
    {
        c = b;
    }
    return c;
}