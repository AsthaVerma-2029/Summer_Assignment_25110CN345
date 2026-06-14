// WRITE A PROGRAM TO FIND DUPLICATE IN A ARRAY 
 
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
    // cout<<"The new array is [";
    // for(int i=0;i<n;i++){
    //     cout<<" "<<num[i];
    // }
    // cout<<" ]"<<endl;

    cout<<"The dublicate elements are : [ ";
    for(unsigned int i=0;i<n-1;i++){
            if(num[i]==num[i+1]){
                cout<<num[i]<<" ";
                while(i<n-1 && num[i]==num[i+1]){
                    i++;
                }
            }
            
        }
    cout<<"]";
return 0;
}