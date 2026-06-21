// WRITE A PROGRAM TO CONVERT LOWER CASE TO UPPER CASE

#include <iostream>
#include <cstring>
#include <cctype>
using namespace std;

int main()
{
    char c[200];
    cout << "Enter the value of the string ";
    cin >> c;
    int length = strlen(c);
    for (int i = 0; i < length - 1; i++)
    {
        if (islower(c[i]))
        {
            c[i] = toupper(c[i]);
        }
    }
    cout << "The string in upper case is " << c;
    return 0;
}