// WRITE A PROGRAM TO CALCULATE THE SUM OF THE FIRST N NATURAL NUMBERS
#include <iostream>
using namespace std;

int main(){
    int n,sum=0;
    cout<<"Enter the value of the N upto which the sum to be calculated :";
    cin>>n;
    for(int i=1;i<=n;i++){
        sum=sum+i;
    }
    cout<<"The sum of the numbers upto "<<n<<" is "<<sum;

return 0;
}