// WRITE PROGRAM TO MERGE TWO SORTED ARRAYS

#include <iostream>
using namespace std;

void sorting(int num[],int n){
    int x;
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-1-i;j++){
            if(num[j]>num[j+1]){
                x=num[j];
                num[j]=num[j+1];
                num[j+1]=x;
            }
        }
    }
}

int valid_check(int n){
    
}

int main(){
    int n1,n2;
    cout<<"Enter the size of the array 1 : ";
    cin>>n1;
    while(n1<=1){
        if(n1<=0){
            cout<<"Size cannot be NEAGATIVE or ZERO"<<endl;
            cout<<"Again enter the size of array : ";
            return 0;
        }
    }
    int num1[n1];
    cout<<"Enter the numbers : ";
    for(int i=0;i<n1;i++){
        cin>>num1[i];
    }

    sorting(num1,n1);
    cout<<"Enter the size of the array 2 : ";
    cin>>n2;
    while(n2<=1){
        if(n2<=0){
            cout<<"Size cannot be NEAGATIVE or ZERO"<<endl;
            cout<<"Again enter the size of array : ";
            return 0;
        }
    }
    int num2[n2];
    cout<<"Enter the numbers : ";
    for(int i=0;i<n2;i++){
        cin>>num2[i];
    }
    sorting(num2,n2);
    int merged[n1+n2];
    int tot_size=n1+n2;
    for(int i=0;i<n1;i++){
        merged[i]=num1[i];
    }
    for(int i=0;i<n2;i++){
        merged[i+n1]=num2[i];
    }
    cout<<endl<<"The merged array is : [ ";
    for(int i=0;i<tot_size;i++){
        cout<<merged[i]<<" ";
    }
    cout<<"]";
    
    
return 0;
}