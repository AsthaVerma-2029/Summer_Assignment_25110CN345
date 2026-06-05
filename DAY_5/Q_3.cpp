// WRITE A PROGRAM TO PRINT FACTORS OF A NUMBER

#include <iostream>
using namespace std;

int main()
{
    int n, fact;
    cout << "Enter the number : ";
    cin >> n;
    cout << "The factors of the " << n << " are : ";
    for (int i = 1; i <= n; i++)
    {
        if (n % i == 0)
        {
            cout << i << " ";
        }
    }
    return 0;
}