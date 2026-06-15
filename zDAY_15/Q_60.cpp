// WRITE A PROGRAM TO MOVE ZEROS TO END

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
    
    int pointer=0;
    for(int i=0;i<n;i++){
        if (num[i]!=0){
            num[pointer]=num[i];
            pointer+=1;
        }
        
    }
    while (pointer <n) {
        num[pointer] = 0;
        pointer++;
    }

    cout<<"The new array with zero's in the end is [ ";
    for(int i=0;i<n;i++){
        cout<<num[i]<<" ";
    }
    cout<<"]"; 
return 0;
}