//WRITE A PROGRAM TO RECURSIVE FIBONACCI

#include <iostream>
using namespace std;

int fibonacci(int n){
    if (n==1){
    return 1;
    }
    else if(n<=0){
        return 0;
    }
    else {
        return fibonacci(n-1)+fibonacci(n-2);
    }
    
}
int main(){
    int n;
    cout<<"Enter the number of the terms : ";
    cin>>n;
    for(int i=0;i<n;i++){
        cout<<fibonacci(i)<<" ";
    }

return 0;
}