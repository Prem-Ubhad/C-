#include<iostream>
using namespace std;
int glo = 6;
void sum(){
    int glo = 9;
    cout<<glo;
}
int main()
{
    int glo = 65;
    bool hu25 = false;
    glo = 68;
    int a = 25;
    int b = 26; 
    float pi = 2.56;
    // cout<<"Value of a is "<<a<<". \nThe Value of b is "<<b<<"\nThe value of pi is "<<pi;
    sum();
    cout<<glo<<endl;
    cout<<hu25;
    return 0;
}
