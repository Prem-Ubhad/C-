#include<iostream>
using namespace std;

class Animal
{
      private:
         int weight, age;
      public:
         string Name, Species;
         void setdata(int weight1, int age2);
         void getdata(){
            cout<<"The Name of the animal is "<<Name<<endl;
            cout<<"The Species of the animal is "<<Species<<endl;
            cout<<"The weight of the animal is "<<weight<<endl;
            cout<<"The age of the animal is "<<age<<endl<<endl;
         }
   
};

void Animal :: setdata(int weight1, int age2){
      weight = weight1;
      age = age2;
}

int main()
{
   Animal cat;
   cat.Name = "Meow";
   cat.Species = "Cat";
   cat.setdata(15,10);
   cat.getdata();
   
   Animal dog;
   dog.Name = "Sheru";
   dog.Species = "Dog";
   dog.setdata(25,15);
   dog.getdata();
   return 0;
}