//WRITE A PROGRAM TO COUNT DIGITS IN A NUMBER
#include <iostream>
using namespace std;

int main(){
    int n,n1,count=0;
    cout<<"Enter the number :";
    cin>>n;
    n1=n;
    while(n!=0){
        n/=10;
        count+=1;
    }
    cout<<"The number of the digits in "<<n1<<" are "<<count;
return 0;
}