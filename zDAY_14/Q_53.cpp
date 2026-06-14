// WRITE A PROGRAM TO LINEAR SEARCH

#include <iostream>
using namespace std;

int main(){
    unsigned int n;
    cout<<"Enter the number of elements : ";
    cin>>n;
    if(n==0){
        cout<<"Elements cannot be ZERO";
        return 0;
    }
    int num[n];
    cout<<"Enter the numbers : ";
    for(int i=0;i<n;i++){
        cin>>num[i];
    }

    int s;
    int found=0;
    cout<<"Enter the number to be searched : ";
    cin>>s;
    for(int i=0;i<n;i++){
        if(num[i]==s){
            cout<<"The number is found in the array ";
            found=1;
            break;
        }
    }
    if(found!=1){
        cout<<"The number is not found in the array ";
    }
return 0;
}