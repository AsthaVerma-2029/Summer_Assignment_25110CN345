// WRITE A PROGRAM TO SELECTION SORT

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
    for(int i=0;i<n;i++){
        int min_num=num[i];
        for(int j=i+1;j<n;j++){
            if(num[j]<min_num){
                min_num=num[j];
                num[j]=num[i];
                num[i]=min_num;
            }
            
        }  
    }
    cout<<"The sorted array is [";
    for(int i=0;i<n;i++){
        cout<<" "<<num[i];
    }
    cout<<" ]"<<endl;
return 0;
}