//WRITE A PROGRAM TO WRITE FUNCTION TO FIND MAXIMUM

#include <iostream>
using namespace std;
int maximum(int n1,int n2){
    return (n1>n2?n1:n2);
}

int main(){
    int n1,n2;
    cout<<"Enter the number 1: ";
    cin>>n1;
    cout<<"Enter the number 2: ";
    cin>>n2;
    cout<<"The maximum is : "<<maximum(n1,n2);
    
return 0;
}