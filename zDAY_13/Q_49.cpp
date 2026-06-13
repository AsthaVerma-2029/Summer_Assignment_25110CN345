// WRITE A PROGRAM TO INPUT AND DISPLAY ARRAY

#include <iostream>
using namespace std;

int main(){
    // int num[5];
    // for(int i=0;i<=5;i++){
    //     cout<<"Enter the num for "<<i<<" position : ";
    //     cin>>num[i];
    // }

    int num[4];
    cout<<"Enter the four numbers : ";
    for(int i=0;i<4;i++){
        cin>>num[i];
    }
 
    // for(int i=0;i<=5;i++){
    //     cout<<"The value of numbers at "<<i<<" is "<<num[i]<<endl;
    // }
    cout<<"The array is [";
    for(int i=0;i<4;i++){
        cout<<" "<<num[i];
    }
    cout<<" ]";

return 0;
}