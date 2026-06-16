// WRITE A PROGRAM TO FIND MAXIMUM FREQUENCY ELEMENT

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
    int max_ele;
    int x,freq2;
    int max_freq=0;
    for(int i=0;i<n;i++){
        int freq=0;
        for(int j=0;j<n;j++){
            if (num[i]==num[j]){ 
                freq=freq+1;
            }
        }
        if (max_freq<freq){
            max_freq=freq;
            max_ele=num[i];
        }

    }
    cout<<"The element with maximum frequency is "<<max_ele<<" and the frequency is "<<max_freq; 
    

return 0;
}