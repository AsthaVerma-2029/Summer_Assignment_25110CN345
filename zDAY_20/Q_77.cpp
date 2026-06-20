// WRITE A PROGRAM TO MULTIPLY TWO MATRICES


#include <iostream>
using namespace std;

int main(){
    int r1,c1,r2,c2;
    cout<<"Enter the row and column number of matrices 1 : ";
    cin>>r1>>c1;

    int num1[r1][c1];
    cout<<"Enter the elements in matrix 1: "<<endl;
    for(int i=0;i<r1;i++){
        for(int j=0;j<c1;j++){
            cin>>num1[i][j];
        }
    }
    cout<<"Enter the row and column number of matrices 2 : ";
    cin>>r2>>c2;
    int num2[r2][c2];
    cout<<"Enter the elements in matrix 2: "<<endl;
    for(int i=0;i<r2;i++){
        for(int j=0;j<c2;j++){
            cin>>num2[i][j];
        }
    }
    if(c1!=r2){
        cout<<"multiplication of matrices not possible";
    }
    int mul_mat[r1][c2];
    for(int i=0;i<r1;i++){
        for(int j=0;j<c2;j++){
            mul_mat[i][j]=0;
        }
    } 
    for(int i=0;i<r1;i++){
        for(int j=0;j<c2;j++){
            for(int k=0;k<r2;k++){
                mul_mat[i][j]=mul_mat[i][j]+num1[i][k]*num2[k][j];
            }
        }
    } 
    cout<<"The multiplication of matrices is : "<<endl;
    for(int i=0;i<r1;i++){
        cout<<"|";
        for(int j=0;j<c2;j++){
            cout<<mul_mat[i][j]<<" ";
        }
        cout<<"|"<<endl;
    }

    

return 0;
}