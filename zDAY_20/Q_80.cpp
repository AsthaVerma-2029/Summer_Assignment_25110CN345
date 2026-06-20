// WRITE A PROGRAM TO FIND COLUMN WISE SUM

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
    for(int i=0;i<c;i++){
        int sum=0;                                            
        for(int j=0;j<r;j++){
            sum+=num[j][i];
            
        }
        cout<<"Sum of column "<<i+1<<" = "<<sum<<endl;
        
    }
return 0;
}