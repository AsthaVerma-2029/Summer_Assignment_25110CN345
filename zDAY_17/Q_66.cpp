// WRITE A PROGRAM TO UNION OF ARRAYS

#include <iostream>
using namespace std;

#include <iostream>
using namespace std;

int main(){
    int n1,n2;
    cout<<"Enter the Size of array 1 : ";
    cin>>n1;
    while(n1<=0){
        cout<<"Size cannot be NEAGATIVE or ZERO"<<endl;
        cout<<"Again Enter the Size of array 1: ";
        cin>>n1;
    }
    int num1[n1];
    cout<<"Enter the elements of the array : ";
    for(int i=0;i<n1;i++){
        cin>>num1[i];
    }
    cout<<"Enter the Size in array 2: ";
    cin>>n2;
    while(n2<=0){
        cout<<"Size cannot be NEAGATIVE or ZERO"<<endl;
        cout<<"Again Enter the Size of array 2: ";
        cin>>n2;
    }
    int num2[n2];
    cout<<"Enter the elements of the array : ";
    for(int i=0;i<n2;i++){
        cin>>num2[i];
    }
    int union_arr[200];
    int tot_size=n1+n2;
    for(int i=0;i<n1;i++){
        union_arr[i]=num1[i];
    }
    for(int i=0;i<n2;i++){
        union_arr[i+n1]=num2[i];
    }
    cout<<endl<<"The union of arrays : [ ";
    for(int i=0;i<tot_size;i++){
        cout<<union_arr[i]<<" ";
    }
    cout<<"]";
    


    return 0;
}