// WRITE A PROGRAM TO BINARY SEARCH


#include <iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the size of the array : ";
    cin>>n;
    while(n<=1){
        if(n<=0){
            cout<<"Size cannot be NEAGATIVE or ZERO"<<endl;
            cout<<"Again enter the size of array : ";
            cin>>n;
        }
        else{
            cout<<"Enter size more than 1 for sorting : ";
            cin>>n;
        }
    }
    int num[n];
    cout<<"Enter the numbers : ";
    for(int i=0;i<n;i++){
        cin>>num[i];
    }
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

    int t;
    cout<<"Enter the number to be searched : ";
    cin>>t;
    int st=0,end=n-1,flag=0;
    while(st<=end){
        int mid=(st+end)/2;
        if(t>num[mid]){
            st=mid+1;
        }
        else if(t<num[mid]){
            end=mid-1;
        }
        else{
            cout<<"The number found..."<<endl;
            flag=1;
            break;
        }
    }
    if(flag==0){
    cout<<"The number not found..."<<endl;
    }



return 0;
}