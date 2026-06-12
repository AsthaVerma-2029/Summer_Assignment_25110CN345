// WRITE A PROGRAM TO WRITE FUNCTION FOR ARMSTRONG 
#include <iostream>
using namespace std;
#include<cmath>

int digit_count(int n)             
{
    int count = 0;
    while (n != 0)
    {
        n = n / 10;
        count += 1;
    }
    return count;
}

void armstrong(int n){
    int x, digit, sum = 0, n1;
    x = digit_count(n);
    n1 = n;
    while (n != 0)
    {
        digit = n % 10;
        n = n / 10;
        sum = sum + (int)pow(digit, x);       
    }
    if (sum == n1)
    {
        cout << "The number is armstrong number ";               
    }
    else
    {
        cout << "The number is not armstrong number ";
    }
}
    int main(){
        int n;
        cout << "Enter the number to be checked : ";
        cin >> n;
        armstrong(n);
    return 0;
    }