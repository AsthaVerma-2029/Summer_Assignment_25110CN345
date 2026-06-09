//WRITE A PROGRAM TO PRINT A HOLLOW SPHERE
// *****
// *   *
// *   *
// *   *
// *****


#include <iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the side of the square : ";
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if(i==1 || j==1 || i==n || j==n){
                cout<<"*";     //to make square look good cout<<"* "
            }
            else{
                cout<<" ";      //cout<<"  "
            }
        }
        cout<<endl;
    }
return 0;
}