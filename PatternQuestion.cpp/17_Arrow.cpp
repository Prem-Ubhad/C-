#include<iostream>
using namespace std;
 
int main()
{
   int n;
   cin>>n;
   int k = n/2;

   for (int i = 1; i <= n; i++)
   {

        for (int j = 1; j <= n; j++)
        {
            if (i<=k)
            {
                cout<<" ";
            }
            
            else {
                cout<<"*";
            }
        }
        
        for (int j = 1; j <= i; j++)
        {
            cout<<"*";
        }
        cout<<endl;
   }

      for (int i = n; i >= 1; i--)
   {

      for (int j = 1; j <= n; j++)
        {
            if (i<=k)
            {
                cout<<" ";
            }
            
            else {
                cout<<"*";
            }
            
        }
        
        for (int j = i; j >= 1; j--)
        {
            cout<<"*";
        }
        cout<<endl;
   }
   
   return 0;
}