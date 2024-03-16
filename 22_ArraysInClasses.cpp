#include <iostream>
using namespace std;

class Shop
{
   int ItemId[100];
   int ItemPrice[100];
   int Counter = 0;

public:
   void SetPrice(void);
   void DisplayPrice(void);
};

void Shop ::SetPrice(void)
{
   cout << "Enter Item Id" << endl;
   cin >> ItemId[Counter];
   cout << "Enter Item Price" << endl;
   cin >> ItemPrice[Counter];
   Counter++;
}

void Shop ::DisplayPrice(void)
{
   for (int i = 0; i < Counter; i++)
   {
      cout << "The Price of Item No. " << ItemId[i] << " is " << ItemPrice[i] << endl;
   }
}

int main()
{
   Shop dukan;
   for (int i = 0; i < 3; i++)
   {
      dukan.SetPrice();
   }
   dukan.DisplayPrice();
   
   return 0;
}