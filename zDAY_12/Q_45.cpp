// WRITE A PROGARM TO WRITE FUNCTION FOR PALINDROME

#include <iostream>
using namespace std;
void palindrome(int n){
    if (n!=0){
        
        int digit,reverse;
        int n1=n;
        while(n!=0){
            digit=n%10;
            reverse=reverse*10+digit;
            n=n/10;
        }
        if(n1==reverse){
            cout<<"The number is palindrome ";
        }
        else{
            cout<<"The number is not palindrome";
        }
    }
    else{
        cout<<"The number is zero enter another number ";
    }
}

int main(){
    int n;
    cout<<"Enter the number: ";
    cin>>n;
    palindrome(n);

return 0;
}