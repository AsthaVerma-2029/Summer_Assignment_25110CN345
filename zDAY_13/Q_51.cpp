// WRITE A PROGRAM TO FIND LARGEST AND SMALLEST ELEMENT

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

    int small_num=num[0];
    for(int i=1;i<n;i++){
        if(small_num<num[i]){
            int small_num=num[i];
        }
        else{
            small_num=num[i];
        }
    }
    cout<<"The smallest number is "<<small_num<<endl;

    int large_num=num[0];
    for(int i=1;i<n;i++){
        if(large_num>num[i]){
            int large_num=num[i];
        }
        else{
            large_num=num[i];
        }
    }
    cout<<"The largest number is "<<large_num;
return 0;
}
