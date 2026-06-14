// WRITE A PROGRAM TO FIND FREQUENCY OF AN ELEMENT

#include <iostream>
using namespace std;

int main(){
    unsigned int n,freq=0;
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
    int ele;
    cout<<"Enter the element : ";
    cin>>ele;
    for(int i=0;i<n;i++){
        if(num[i]==ele){
            freq+=1;
        }
    }
    if(freq==0){
        cout<<"The element is not present in the array.";
    }
    else{
        cout<<"The frequency of the element is : "<<freq;
    }
return 0;
}