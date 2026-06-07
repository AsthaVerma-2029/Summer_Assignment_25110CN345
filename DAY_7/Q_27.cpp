//WRITE A PROGRAM TO RECURSIVE SUM OF DIGITS

#include <iostream>
using namespace std;
int digit_sum(int n){
    int dig;
    if (n<0){
        n=abs(n);    //here -ve number converted to +ve
    }       
    if(n==0){
        return 0;
    }
    dig=n%10;
    n/=10;
    return dig+digit_sum(n) ;

}

int main(){
    int n;
    cout<<"Enter the number : ";
    cin>>n;
    cout<<digit_sum(n);

return 0;
}