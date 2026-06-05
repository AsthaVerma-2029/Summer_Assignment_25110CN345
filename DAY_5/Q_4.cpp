//  WRITE A PROGRAM TO FIND THE LARGEST PRIME FACTOR

#include <iostream>
using namespace std;

int prime_check(int n)
{
    int factor = 0;
    for (int i = 1; i <= n; i++)
    {
        if (n % i == 0)
        {
            factor++;
        }
    }
    if (factor <= 2)
    {
        return 1;
    }
}

int main()
{
    int n, lar_fact, count;
    cout << "Enter the number : ";
    cin >> n;
    for (int i = 1; i < n; i++)
    {
        if (prime_check(i) == 1)         // we check each time if i is prime throughout the loop
        {                               
            if (n % i == 0)               // now i is checked, if it is a factor
            {                                 
                lar_fact = i;                 // continously changes values untill the last prime factor
            }
        }
    }
    cout << "The largest factor of " << n << " is " << lar_fact;
    return 0;
}