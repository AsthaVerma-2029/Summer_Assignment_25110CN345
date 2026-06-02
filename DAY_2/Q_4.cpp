//WRITE A PROGRAM TO CHECK WHETHER A GIVEN NUMBER IS PALINDROME
#include <iostream>
using namespace std;

int main(){
    int n,n1,reverse=0,digit;
    cout<<"Enter the number :";
    cin>>n;
    n1=n;
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
return 0;
}