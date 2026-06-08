// WRITE A PROGRAM TO PRINT NUMBER TRIANGLE
//   1
//   12
//   123
//   1234
//   12345


#include <iostream>
using namespace std;

int main(){
    for(int i=0;i<=5;i++){
        for(int j=1;j<=i;j++){
            cout<<j;
        }
        cout<<endl;
    }
return 0;
}