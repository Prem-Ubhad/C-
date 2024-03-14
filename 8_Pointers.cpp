#include <iostream>
using namespace std;
int main()
{
    int a = 26;
    int *b = &a;

    cout <<"Value of address of a "<< b << endl;

    // & ------> (address of) operator
    cout <<"Value of address of a " << &a << endl;

    // * ------> (value at)Dereference operator
    cout <<"Value of the variable whose address b is storing " << *b << endl;

    // POINTER TO POINTER
    int** c = &b;
    cout <<"Value of address of b " << c << endl;
    cout <<"Value of address of b " << &b << endl;
    cout <<"Value of the variable whose address c is storing " << *c << endl;
    cout <<"Value of the variable whose address b is storing " << **c << endl;


    return 0;
}