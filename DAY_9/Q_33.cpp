// WRITE A PROGRAM TO PRINT REVERSE STAR PATTERN
// *****
// ****
// ***
// **
// *

#include <iostream>
using namespace std;

int main(){
    int n=5;
    for(int i=0;i<5;i++){
        for(int j=5;j>i;j--){
            cout<<"*";
        }
        cout<<endl;
    }
return 0;
}