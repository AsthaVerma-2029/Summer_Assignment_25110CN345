//WRITE A PROGRAM TO PRINT NUMBER PYRAMID
//     1
//    121
//   12321
//  1234321
// 123454321

#include <iostream>
using namespace std;

int main(){
    for (int i = 1; i <= 5; i++){
        for (int j = 0; j <5-i; j++){
            cout << " ";
        }        
        for(int j=1;j<=i;j++){
            cout<<j;
        }
        for(int j=i-1;j>=1;j--){
            cout<<j;
        }
        cout<<endl;
    }

    
return 0;
}