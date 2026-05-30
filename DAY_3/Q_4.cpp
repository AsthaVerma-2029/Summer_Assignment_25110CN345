//WRITE A PROGRAM TO FIND THE LCM OF THE TWO NUMBERS
#include <iostream>
using namespace std;

int main(){
    int num1,num2,lcm;
    cout<<"Enter the number 1 : ";
    cin>>num1;
    cout<<"Enter the number 2 : ";
    cin>>num2;
    for(int i=max(num1,num2);i<=(num1*num2);i=i+max(num1,num2)){   //lcm is always the multiple of the greatest number
        if(i%num1==0 && i%num2==0){                               // instead of i++ i jumps directly in multiple of greatest number
            lcm=i;
            break;
        }
    }
    cout<<"The lcm of the numbers "<<num1<<" and "<<num2<<" are : "<<lcm;
return 0;
}