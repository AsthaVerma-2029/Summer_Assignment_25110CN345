// WRITE A PROGRAM TO ROTATE ARRAY LEFT

#include <iostream>
using namespace std;
void reverse (int num[],unsigned int start,unsigned int end){
    int x;
    while (start<end){
        x=num[start];
        num[start]=num[end];
        num[end]=x;
        start+=1;
        end-=1;
    }

}

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
    unsigned int steps;
    cout<<"Enter number by which it is to be rotated :";
    cin>>steps;
    reverse(num,0,steps-1);
    reverse(num,steps,n-1);
    reverse(num,0,n-1);

    cout<<"The left rotated array is [ ";
    for(int i=0;i<n;i++){
        cout<<num[i]<<" ";
    }
    cout<<"]"; 


return 0;
}