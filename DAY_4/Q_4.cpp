//WRITE A PROGRAM TO PRINT ARMSTRONG NUMBERS IN A RANGE
#include <iostream>
using namespace std;
#include<cmath>

int digit_count(int n){
    int count=0;
    while(n!=0){
        n=n/10;
        count+=1;
    }
    return count;
}

int main(){
    int range;
    cout<<"Enter the range for printing armstrong number";
    cin>>range;
    cout<<"The armstrong numbers upto "<<range<< " are as follows : ";
    for(int i=1;i<=range;i++){
        int sum=0,num,p,dig;
        num=i;
        p=digit_count(num);
        while(num!=0){
            dig=num%10;
            sum=sum+pow(dig,p);
            num=num/10;
        }
        if (i==sum){
            cout<<i<<" ";
        }
    }
    
return 0;
}