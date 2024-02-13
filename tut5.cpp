#include<iostream>
using namespace std;
int main()
{
   char Alphabet ;
    cout<<"Enter a Alphabet : "<<endl;
    cin>>Alphabet;
   switch (Alphabet)
   {
   case 'a':
    cout<<"Letter a is a vowel"<<endl;
    break;
   case 'e':
    cout<<"Letter e is a vowel"<<endl;
    break;
   case 'i':
    cout<<"Letter i is a vowel"<<endl;
    break;
   case 'o':
    cout<<"Letter o is a vowel"<<endl;
    break;
   case 'u':
    cout<<"Letter u is a vowel"<<endl;
    break;

   
   default:cout<<"This letter is a Consonanat ";
    break;
   }
   return 0;
}