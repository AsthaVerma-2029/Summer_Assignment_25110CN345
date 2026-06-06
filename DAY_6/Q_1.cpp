// WRITE A PROGRAM TO CONVERT DECIMAL TO BINARY
#include <iostream>
#include <string>         //include string library 
using namespace std;

string decimal_binary(int n)
{
    if (n == 0)
    {
        return "0";
    }
    string bin_str = "";            //take a empty string
    while (n > 0)
    {
        int r = n % 2;
        bin_str = bin_str + to_string(r);            //the string is added to the empty string
        n /= 2;
    }
    string binary(bin_str.rbegin(), bin_str.rend());        //the string is reversed and stored in string called binary

    return binary;
}
int main()
{
    int n;
    cout << "Enter the decimal number : ";
    cin >> n;
    string bin = decimal_binary(n);
    cout << "The binary conversion of " << n << " is : " << bin;
    return 0;
}
