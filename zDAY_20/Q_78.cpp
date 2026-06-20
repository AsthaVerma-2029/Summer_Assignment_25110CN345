// WRITE A PROGRAM TO CHECK SYMETRIC MATRIX

#include <iostream>
using namespace std;

int main(){
    int r,c;
    cout<<"Enter the row and column number of matrix: ";
    cin>>r>>c;

    while(r!=c){
        cout<<"Rows and column of matrix must be equal "<<endl
        <<"Enter again : ";
        cin>>r>>c;
    }
    
    int num[r][c];
    cout<<"Enter the elements in matrix : "<<endl;
    int flag=1 ;                                              
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cin>>num[i][j];
            if(num[j][i]!=num[i][j] && j<i){
                flag=0; 
            } 
        }
    }

    
    if(flag==1){
        cout<<"The the matrix is symetric : "<<endl;
    }
    else{
        cout<<"The the matrix is not symetric : "<<endl;
    }
    

    
return 0;
}