//WRITE A PROGRAM TO FIND THE GCD OF TWO NUMBERS 
#include <iostream>
using namespace std;

int main(){
    int num1,num2,gcd;
    cout<<"Enter the number 1: ";
    cin>>num1;
    cout<<"Enter the number 2: ";
    cin>>num2;                 
    for(int i=1;i<=(num2>num1?num2:num1);i++){         //ternary operator,also max function can bo used directly
        if(num1%i==0 && num2%i==0){
            gcd=i;
        }
    }
    cout<<"The gcd of the numbers "<<num1<<" and "<<num2<<" are : "<<gcd;
return 0;
}