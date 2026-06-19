// WRITE A PROGRAM TO SUBTRACT MATRICES

#include <iostream>
using namespace std;

int main(){
    int r,c;
    cout<<"Enter the row and column number of matrices 1 and 2 : ";
    cin>>r>>c;

    int num1[r][c];
    cout<<"Enter the elements in matrix 1: "<<endl;
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cin>>num1[i][j];
        }
    }

    int num2[r][c];
    cout<<"Enter the elements in matrix 2: "<<endl;
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cin>>num2[i][j];
        }
    }
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            num1[i][j]-=num2[i][j];
        }
    }
    cout<<"The subtracted matrix is : "<<endl;
    for(int i=0;i<r;i++){
        cout<<"|";
        for(int j=0;j<c;j++){
            cout<<num1[i][j]<<" ";
        }
        cout<<"|"<<endl;
    }
return 0;
}