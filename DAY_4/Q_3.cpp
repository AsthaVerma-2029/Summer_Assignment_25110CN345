// WRITE A PROGRAM TO CHECK ARMSTRONG NUMBER

#include <iostream>
#include <cmath>
using namespace std;

int digit_count(int n)             //function to count digits
{
    int count = 0;
    while (n != 0)
    {
        n = n / 10;
        count += 1;
    }
    return count;
}

int main()
{
    int n, x, digit, sum = 0, n1;
    cout << "Enter the number to be checked : ";
    cin >> n;
    x = digit_count(n);
    n1 = n;
    while (n != 0)
    {
        digit = n % 10;
        n = n / 10;
        sum = sum + pow(digit, x);       //sum of each digit raised to power of the number of digits
    }
    if (sum == n1)
    {
        cout << "The number is armstrong number ";               
    }
    else
    {
        cout << "The number is not armstrong number ";
    }

    return 0;
}