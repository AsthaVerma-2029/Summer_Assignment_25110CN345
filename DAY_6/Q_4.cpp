//WRITE A PROGRAM TO FIND X^N WITHOUT USING POW() FUNCTION

#include <iostream>
using namespace std;

double power(int x,int n){
    if (n==0){
        return 1;
    }
    if(n<0){
        return 1/power(x,-n);
    }
    return x*power(x,n-1);
}

int main(){
    int x,n;
    cout<<"Enter the number x : ";
    cin>>x;
    cout<<"Enter the number n : ";
    cin>>n;
    cout<<"The x^n is " <<power(x,n);
return 0;
}