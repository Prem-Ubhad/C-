#include<iostream>
using namespace std;
int main()
{
   int i = 1;
   
   //For Loop
   for (int i = 0; i < 40; i++)
   {
      cout<<i<<endl;
   }
   

  // While Loop
  while (i<40)
  {
   cout<<i<<endl;
   i++;
  }

// do-while Loop
do
{
   cout<<i<<endl;
   i++;
} while (i<=40);

  

   return 0;
}