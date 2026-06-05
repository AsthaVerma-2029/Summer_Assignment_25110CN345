// WRITE A PROGRAM TO CHECK PERFECT NUMBER

#include <iostream>
using namespace std;

int main()
{
    int n, sum = 0;
    cout << "Enter the number to be checked : ";
    cin >> n;
    for (int i = 1; i < n; i++)              // not included the number itself
    {                                  
        if (n % i == 0)
        {                                
            int div = i;                       // sum of divisors excluding the number itself is perfect number
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
    return 0;
}