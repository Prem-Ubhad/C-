#include<iostream>
using namespace std;

// Volume of cylinder
int Volume (int r,int h ){
    return 3.14*r*r*h;
}

// Volume of Cube
int Volume (int a ){
    return a*a*a;
} 

// Volume of cuboid
int Volume (int l,int b,int h ){
    return l*b*h;
} 

int main()
{
   cout<<"The volume of cylinder of height 6 and radius 5 is = "<<Volume(5,6)<<endl;
   cout<<"The volume of cube of side 5 is = "<<Volume(5)<<endl; 
   cout<<"The volume of cuboid of length 9 breadth 6 and height 5 is = "<<Volume(9,6,5)<<endl; 
   return 0;
}