//WRITE A PROGRAM TO PRINT THE MULTIPLICATION TABLE OF A GIVEN NUMBER 
#include <iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the number of which the table to be written : ";
    cin>>n;
    cout<<"The table is as follows:"<<endl;
    for (int i=1;i<=10;i++){
        cout<<n<<" X "<< i <<" = "<< n*i<<endl;

    }
return 0;
}