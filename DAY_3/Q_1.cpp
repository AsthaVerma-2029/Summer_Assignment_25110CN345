//WRITE A PROGRAM TO CHECK WHETHER A NUMBER IS PRIME 
#include <iostream>
using namespace std;

int main(){
    int n,factor=0;
    cout<<"Enter the number to be checked";
    cin>>n;
    for(int i=1;i<=n;i++){
        if (n%i==0){
            factor++;
        }
        
    }
    if (factor>2){
        cout<<"The number is not prime";
    }
    else{
        cout<<"The number is prime";
    }

return 0;
}