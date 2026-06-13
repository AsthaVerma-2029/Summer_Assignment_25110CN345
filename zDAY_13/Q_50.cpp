// WRITE A PROGRAM TO FIND SUM AND AVERAGE OF ARRAY

#include <iostream>

using namespace std;

int main(){
    unsigned int n;         // you can only enter 0 or more
    cout<<"Enter the number of elements : ";
    cin>>n;
    if(n==0){
        cout<<"Elements cannot be ZERO";
        return 0;
    }
    int a[n];
    cout<<"Enter the numbers : ";
    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    int sum=0;
    for(int i=0;i<n;i++){
        sum=sum+a[i];

    }double average=(double)sum/n;

    cout<<"The sum of the elements of the array is: "<<sum<<endl;
    cout<<"The average of the elements of the array is : "<<average;

return 0;
}
