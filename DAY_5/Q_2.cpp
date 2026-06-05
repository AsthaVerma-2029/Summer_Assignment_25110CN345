// WRITE A PROGRAM TO CHECK STRONG NUMBER
#include <iostream>
using namespace std;

int factorial(int n)
{
    int fact = 1;
    for (int i = 1; i <= n; i++)
    {
        fact = fact * i;
    }
    return fact;
}

int main()
{
    int n, dig, sum = 0, n1;
    cout << "Enter the number to be checked : ";
    cin >> n;
    n1 = n;
    while (n != 0)
    {
        dig = n % 10;
        sum = sum + factorial(dig);                 // find thd factorial of the digits the added
        n = n / 10;
    }
    if (sum == n1)
    {
        cout << "The number is a strong number ";
    }
    else
    {
        cout << "The number is not armstrong";
    }
    return 0;
}