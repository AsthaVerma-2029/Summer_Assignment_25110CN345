// WRITE A PROGRAM TO FIND DIAGONAL SUM

#include <iostream>
using namespace std;

int main(){
    int r,c;
    cout<<"Enter the row and column number of matrix: ";
    cin>>r>>c;

    int num[r][c];
    cout<<"Enter the elements in matrix : "<<endl;
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cin>>num[i][j];
        }
    }
    int sum=0;
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            if(i==j){
                sum+=num[i][j];
            }
            
        }
    }
    cout<<"The sum of the diagonal of the matrix is :"<<sum;
    

    
return 0;
}