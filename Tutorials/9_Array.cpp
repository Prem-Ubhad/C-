#include <iostream>
using namespace std;

int main()
{
    // ARRAYS
    int marks[] = { 75,86,65,69,90 };
    int i = 0;

    while(i<5){
        cout<<"The marks of student "<< i <<" is "<<marks[i]<<endl;
        i++;
    }
   
    do{
        cout<<"The marks of student "<< i <<" is "<<marks[i]<<endl;
        i++;
    }while(i<5);


    return 0;
}