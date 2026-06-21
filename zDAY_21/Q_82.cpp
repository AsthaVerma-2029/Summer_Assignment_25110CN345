// WRITE A PROGRAM TO REVERSE A STRING

#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    char ch1[200];
    cout << "Enter the value of the string ";
    cin >> ch1;
    int length = strlen(ch1);
    int start = 0, end = length - 1;
    while (start < end)
    {
        char ch2 = ch1[start];
        ch1[start] = ch1[end];
        ch1[end] = ch2;
        start++;
        end--;
    }
    cout << "Reversed string is " << ch1;
    return 0;
}