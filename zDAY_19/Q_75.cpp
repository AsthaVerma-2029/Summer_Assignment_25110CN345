// WRITE A PROGRAM TO FIND TRANSPOSE OF A MATRIX

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
    int tran_mat[c][r];                                               
    for(int i=0;i<r;i++){                                            
        for(int j=0;j<c;j++){                                         
            tran_mat[j][i]=num[i][j];                                
        }                                                            
    }                                                                 
                                                                      
    cout<<"The transpose matrix is : "<<endl;
    for(int i=0;i<c;i++){
        cout<<"|";
        for(int j=0;j<r;j++){
            cout<<tran_mat[i][j]<<" ";
        }
        cout<<"|"<<endl;
    }

    
return 0;
}


// for(int i=0;i<r;i++){
//     for(int j=i+1;j<c;j++){
//         int temp=num[i][j];
//         num[i][j]=num[j][i];
//         num[j][i]=temp;
//     }
// }
