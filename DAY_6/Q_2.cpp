// WRITE A PROGRAM TO CONVERT BINARY TO DECIMAL

#include <iostream>
#include <cmath>       //include the math library
using namespace std;

int main()
{
    int num, sum = 0;
    cout << "Enter the number : ";
    cin >> num;
    int n2 = num;
    int i = 0;
    while (num != 0)
    {
        int bin = num % 10;
        num /= 10;
        sum = sum + (bin * pow(2, i));
        i++;
    }
    cout << "The decimal number of " << n2 << " is " << sum;

    return 0;
}