// WRITE A PROGRAM TO FIND STRING LEN USING strlen()

#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char s[200];
    cout << "Enter the value of the string ";
    cin >> s;

    cout << "The length of string is " << strlen(s);

    return 0;
}
