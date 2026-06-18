// WRITE A PROGRAM TO SORT ARRAY IN DESCENDING ORDER

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
            if(num[j]<num[j+1]){
                x=num[j];
                num[j]=num[j+1];
                num[j+1]=x;
            }
        }
    }
    cout<<"The sorted array in descending order is [";
    for(int i=0;i<n;i++){
        cout<<" "<<num[i];
    }
    cout<<" ]"<<endl;
    
return 0;
}