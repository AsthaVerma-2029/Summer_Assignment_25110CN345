//WRITE A PROGRAM TO WRITE FUNCTION TO FIND SUM OF TWO NUMBERS

#include <iostream>
using namespace std;

void sum(int a,int b ){      //function to find sum of two numbers
    int sum =a+b;
    cout<< sum;
}
int main(){
    int n1,n2;
    cout<<"Enter the number 1 : ";
    cin>>n1;
    cout<<"Enter the number 2 : ";
    cin>>n2;
    cout<<"The sum is : ";
    sum(n1,n2);
    
return 0;
}