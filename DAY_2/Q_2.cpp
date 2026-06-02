//WRITE A PROGRAM TO REVERSE A NUMBER 
#include <iostream>
using namespace std;

int main(){
    int n,reverse=0,digit,n1;
    cout<<"Enter the number";
    cin>>n;
    n1=n;
    while(n!=0){
        digit=n%10;
        reverse=reverse*10+digit;
        n=n/10;
    }
    cout<<"The reverse of "<<n1<<" is :"<<reverse;
return 0;
}