// WRITE A PROGRAM TO RECURSIVE REVERSE A NUMBER

#include <iostream>
#include<cmath>
using namespace std;

int dig_count(int n){
    int count=0;
    while(n!=0){
        n/=10;
        count+=1;
    }
    return count;
}

int rev_num(int n){
    if (n==0){                       //also can use long long for very large numbers
        return 0;
    }
    int dig=n%10;
    n/=10;
    return dig*pow(10,dig_count(n))+rev_num(n);

}

int main(){
    int n;
    cout<<"Enter the number : ";
    cin>>n;
    cout<<"Thr reverse is : "<<rev_num(n);


return 0;
}