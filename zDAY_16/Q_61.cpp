// WRITE A PROGRAM TO FIND MISSING NUMBER IN ARRAY

#include <iostream>
using namespace std;

int main(){
    int num[10]={1,2,3,4,6,7,8,9,10,11};
    int sum1=11*12/2;
    int sum2=0;
    for(int i=0;i<10;i++){
        sum2=sum2+num[i];

    }
    int miss_no=sum1-sum2;
    cout<<"The missing number is "<<miss_no;
    
return 0;
}  