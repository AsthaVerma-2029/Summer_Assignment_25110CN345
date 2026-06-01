//WRITE A PROGRAM TO FIND FACTORIAL OF A NUMBER 
#include <iostream>
using namespace std;

int main(){
    int n,fact=1;
    cout<<"Enter the number whose factorial to be find :";
    cin>>n;
    for(int i=1;i<=n;i++){
        fact=fact*i;

    }
   cout<<"The factorial of the given number is: "<<fact;

return 0;
}