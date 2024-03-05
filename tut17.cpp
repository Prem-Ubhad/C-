#include<iostream>

using namespace std;

int & swap(int &a, int &b){
    int temp = a;
        a = b;
        b = temp;
        return a;
}
int main()
{
   int num1, num2;
   cout<<"Enter First No. "<<endl;
   cin>>num1;
   cout<<"Enter Second No. "<<endl;
   cin>>num2;

   swap(num1,num2) = 766;

   cout<<"The first number after getting swapped is "<<num1<<endl;
   cout<<"The second number after getting swapped is "<<num2<<endl;


   return 0;
}

