//WRITE A PROGRAM TO PRINT PRIME NUMBERS IN A RANGE
#include <iostream>
using namespace std;

int main(){
    int range,num;
    cout<<"Enter the range upto which prime numbers to be printed : ";
    cin>>range;
    for(int i=2;i<=range;i++){
        int factor=0;
        for(int j=1;j<=i;j++){
            if (i%j==0){
            factor++;
            num=i;
        }
        }
        if (factor<=2){
            cout<<num<<"  ";
    }
    }
return 0;
}