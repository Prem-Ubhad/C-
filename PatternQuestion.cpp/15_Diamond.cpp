#include<iostream>
using namespace std;
 
int main()
{
   int a;
   cin>>a;

   for (int i = 1; i <= a; i++)
   {
        for (int j = a-i; j >= 1; j--)
        {
            cout<<"  ";
        }
        
        for (int j = 1; j <= i; j++)
        {
            cout<<"* ";
        }

        for (int j = 2; j <=i; j++)
        {
            cout<<"* ";
        }
        
        cout<<endl;
   }
   
      for (int i = 1; i <= a; i++)
   {
        for (int j = 1; j <= i-1; j++)
        {
            cout<<"  ";
        }
        
        for (int j = 1; j <= a-i+1; j++)
        { 
            cout<<"* ";
        }

        for (int j = 2; j <=a-i+1; j++)
        {
            cout<<"* ";
        }
        
        cout<<endl;
   }
   return 0;
}