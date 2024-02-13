#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
//    ********************** MANIPULATORS endl and setw ************************
    int a = 25, b = 568, c = 5666;
    cout<<"This is the value of a without setw : "<<a<<endl;
    cout<<"This is the value of b without setw : "<<b<<endl;
    cout<<"This is the value of c without setw : "<<c<<endl;
    // setw makes the output right justified
    // setw is present in iomanip library
    cout<<"This is the value of a with setw : "<<setw(4)<<a<<endl;
    cout<<"This is the value of b with setw : "<<setw(4)<<b<<endl;
    cout<<"This is the value of c with setw : "<<setw(4)<<c<<endl;
   return 0;
}