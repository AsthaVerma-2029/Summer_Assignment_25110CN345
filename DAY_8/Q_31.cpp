// WRITE A PROGRAM TO PRINT CHARACTER TRIANGLE
//   A
//   AB
//   ABC
//   ABCD
//   ABCDE


#include <iostream>
using namespace std;
int main(){
    for(int i=0;i<=5;i++){
        for(int j=65;j<65+i;j++){
            cout<<(char)j;
        }
        cout<<endl;
    }
return 0;
}