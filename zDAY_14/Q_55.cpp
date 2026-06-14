// WRITE A PROGRAM TO FIND SECOND LARGEST ELEMENT

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
    if(n==2){
        cout<<"At least 2 elements needed";
        return 0;
    }

    int num[n];
    cout<<"Enter the numbers : ";
    for(int i=0;i<n;i++){
        cin>>num[i];
    }
    int x;
    for(unsigned int i=0;i<n;i++){
        for(int j=0;j<n-i-1;j++){
            if(num[j]<num[j+1]){
                x=num[j];
                num[j]=num[j+1];
                num[j+1]=x;
            }
        }
    }
    // cout<<"The new array is [";
    // for(int i=0;i<n;i++){
    //     cout<<" "<<num[i];
    // }
    // cout<<" ]"<<endl;
    cout<<"The second largest element is :"<<num[1];

    
return 0;
}