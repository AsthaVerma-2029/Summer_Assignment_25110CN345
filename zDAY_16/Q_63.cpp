//WRITE A PROGRAM TO FIND PAIR WITH A GIVEN SUM 


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
    int sum;;
    cout<<"Enter the number for which the pairs to be found :";
    cin>>sum;
    int flag=0;
    cout<<"pairs are : ";
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if((num[i]+num[j])==sum){
                cout<<"( "<<num[i]<<" , "<<num[j]<<" )";
                flag=1;
            }
        }
    }
    if(flag==0){
        cout<<" not found ";
    }

return 0;
}