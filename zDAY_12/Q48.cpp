// WRITE A PROGRAM TO WRITE FUNCTION FOR PERFECT NUMBER

#include <iostream>
using namespace std;

void perfect_num(int n){
    int sum=0;
    for (int i = 1; i < n; i++)              
    {                                  
        if (n % i == 0)
        {                                
            int div = i;                       
            sum = sum + div;
        }
    }
    if (sum == n)
    {
        cout << "The number is perfect number";
    }
    else
    {
        cout << "The number is not perfect number";
    }

    
}
int main(){
    int n;
    cout<<"Enter the number : ";
    cin>>n;
    perfect_num(n);

return 0;
}