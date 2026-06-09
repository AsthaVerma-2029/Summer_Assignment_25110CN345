// WRITE A PROGRAM TO PRINT REPEATED CHARACTER PATTERN
// A
// BB
// CCC
// DDDD
// EEEEE


#include <iostream>
using namespace std;

int main(){
    for(int i=65;i<70;i++){
        for(int j=1;j<=(i+1)-65;j++){    // the value of j should increase from 1 to 5 
            cout<<(char)i;               //therefore j=(i+1)-65
        }
        cout<<endl;
    }
return 0;
}