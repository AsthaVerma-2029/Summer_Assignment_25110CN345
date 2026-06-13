// WRITE A PROGRAM TO COUNT EVEN AND ODD ELEMENTS

#include <iostream>
using namespace std;

int main(){
    unsigned int n;
    cout<<"Enter the number of elements : ";
    cin>>n;
    if(n=0){
        cout<<"Elements cannot be ZERO";
        return 0;
    }
    int num[n];
    cout<<"Enter the numbers : ";
    for(int i=0;i<n;i++){
        cin>>num[i];
    }
    int even_count=0;
    int odd_count=0;
    for(int i=0;i<n;i++){
        if(num[i]%2==0){
            even_count+=1;
        }
        else {
            odd_count+=1;
        }
    }
    cout<<"The number of even elements are :"<<even_count<<endl;
    cout<<"The number of odd elements are :"<<odd_count;

return 0;
}