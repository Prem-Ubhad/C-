#include<iostream>
using namespace std;

int & factorial(int &a){
    
    for (int i = 1; i < a; i++)
    {
        a = a * i;
    }
    return a;
}

int main()
{
   int num;
   cout<<"Enter a Number"<<endl;
   cin>>num;
   cout<<"The factorial of "<<num<<" is "<<factorial(num);
   return 0;
}