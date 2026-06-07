// WRITE A PROGRAM TO RECURSIVE FACTORIAL

#include <iostream>
using namespace std;

int factorial(int n){              //recursive function
    if(n==0){                     //base case
        return 1;
    }
    return n*factorial(n-1);
}

int main(){
    int n;
    cout<<"Enter the number : ";
    cin>>n;
    cout<<"The factorial of "<<n<<" is "<<factorial(n);
return 0;
}