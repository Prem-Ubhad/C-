#include<iostream>
using namespace std;

int fib(int num){
    if (num<2)
    {
        return 1;
    }
    return fib(num-2)+fib(num-1);
}

int main()
{
   int x;

   cout<<"Enter a Position of the fibonacci series "<<endl;
   cin>>x;

   cout<<"The Number at that position is"<<endl<<fib(x);
   return 0;
}