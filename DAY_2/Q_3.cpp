//WRITE A PROGRAM TO FIND THE PRODUCT OF THE DIGITS OF A NUMBER
#include <iostream>
using namespace std;

int main(){
    int n,n1,digit,product=1;
    cout<<"Enter the number :";
    cin>>n;
    n1=n;
    while(n!=0){
        digit=n%10;
        n=n/10;
        product=product*digit;

    }
    cout<<"The product of the digits of "<<n1<<" is :"<<product;
return 0;
}