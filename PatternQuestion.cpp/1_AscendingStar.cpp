#include<iostream>
using namespace std;
 
void printpattern(int n);

int main(){
    int i;
    cout<<"Enter the number of lines\n";
    cin>>i;
    printpattern(i);
    return 0;
}

void printpattern(int n){
    if(n == 1){
        printf("*\n");
        return;
    }
    printpattern(n - 1);
   for(int i=0; i < (2*n-1); i++){
    printf("*");
    }
    printf("\n");
}