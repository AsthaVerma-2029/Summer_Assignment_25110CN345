// WRITE A PROGRAM TO WRITE FUNCTION TO FIND FACTORIAL

#include <iostream>
using namespace std;

void factorial(int n){      //function to find factorial
    int fact=1;
    for(int i=1;i<=n;i++){
            fact=fact*i;
        }
    cout<<"The factorial of the given number is: "<<fact;
}

int main(){
    int n;
    cout<<"Enter the number : ";
    cin>>n;
    factorial(n);    
return 0;
}