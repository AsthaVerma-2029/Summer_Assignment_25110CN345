// WRITE A PROGRAM TO WRITE A FUNCTION TO CHECK PRIME

#include <iostream>
using namespace std;

void prime_check(int n){             //function to check prime number
    int factor=0;
    for(int i=1;i<=n;i++){
            if (n%i==0){
                factor++;
            }
            
        }
        if (factor>2){
            cout<<"The number is not prime ";
        }
        else{
            cout<<"The number is prime ";
        }
    }

int main(){
    int n;
    cout<<"Enter the number to be checked: ";
    cin>>n;
    prime_check(n);
return 0;
} 

