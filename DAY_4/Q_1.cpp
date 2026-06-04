//WRITE A PROGRAM TO GENERATE FIBONACCI SERIES

#include <iostream>
using namespace std;

int main(){
    int n1=1,n,n2=1,count_term=0;
    cout<<"Enter the number of the terms of fibonacci : ";
    cin>>n;
    cout<<"The fibonacci series is as follows : "<<endl;
    while(count_term<n){
        cout<<n1<<" "<<n2<<" ";
        n1=n1+n2;
        n2=n1+n2;
        count_term+=2;          //this loop give 2 terms in one iteration so we added 2 every time in term count
        
return 0;
}