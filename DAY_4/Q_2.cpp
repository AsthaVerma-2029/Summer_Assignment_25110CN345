// WRITE A PROGRAM TO FIND NTH FIBONACCI TERM

#include <iostream>
using namespace std;

int main()
{
    int n1 = 0, n2 = 1, n, temp;
    cout << "Enter the term of fibonacci : ";
    cin >> n;
    cout << "the " << n << "th term of the fibonacci is : ";
    for (int i = 0; i < n; i++)
    {
        temp = n1 + n2;
        n1 = n2;
        n2 = temp;
    }
    cout << n1;
    return 0;
}