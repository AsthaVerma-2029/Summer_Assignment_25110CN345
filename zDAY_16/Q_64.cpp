// WRITE A PROGRAM TO REMOVE DUPLICATES FROM AN ARRAY

#include <iostream>
using namespace std;

int main(){
    unsigned int n;
    cout<<"Enter the number of elements : ";
    cin>>n;
    if(n<=2){
        cout<<"At least 2 elements needed";
        return 0;
    }

    int num[n];
    cout<<"Enter the numbers : ";
    for(int i=0;i<n;i++){
        cin>>num[i];
    }
    int x;
    for(unsigned int i=0;i<n-1;i++){
        for(unsigned int j=0;j<n-1-i;j++){
            if(num[j]<num[j+1]){
                x=num[j];
                num[j]=num[j+1];
                num[j+1]=x;
            }
        }
    }
    cout<<"The sorted array is [";
    for(int i=0;i<n;i++){
        cout<<" "<<num[i];
    }
    cout<<" ]"<<endl;

    int counter=0;
    for(int i=0;i<n;i++){
        if(num[i]==num[i+1]){
        
        }
        else{
            num[counter]=num[i];
            counter++;
        }
        
    }

    cout<<"The new array is [";
    for(int i=0;i<counter;i++){
        cout<<" "<<num[i];
    }
    cout<<" ]";
return 0;
}