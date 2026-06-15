// WRITE A PROGRAM TO REVERSE AN ARRAY 

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
    int start=0,x;
    unsigned int end=n-1;
    while (start<end){
        x=num[start];
        num[start]=num[end];
        num[end]=x;
        start+=1;
        end-=1;
    }
    cout<<"The reverse array is [ ";
    for(int i=0;i<n;i++){
        cout<<num[i]<<" ";
    }
    cout<<"]";    
return 0;
}