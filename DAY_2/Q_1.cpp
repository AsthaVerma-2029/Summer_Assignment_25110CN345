//  WIRTE A PROGRAM TO FIND THE SUM OF THE DIGITS OF A NUMBER 
#include <iostream>
using namespace std;

int main(){
    int n,sum=0,n1,digit;
    cout<<"Enter the number";
    cin>>n;
    n1=n;
    while(n!=0){
        digit=n%10;         
        n=n/10;
        sum=sum+digit;
    }
    cout<<"The sum of the digits of "<<n1<<" is :"<<sum;

return 0;
} 