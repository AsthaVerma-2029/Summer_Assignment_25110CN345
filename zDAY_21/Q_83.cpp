// WRITE A PROGRAM TO COUNT VOWELS ANDD CONSONANTS

#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char c[200];
    cout << "Enter the value of the string ";
    cin >> c;
    int length = strlen(c);
    int vow_count = 0;
    int con_count = 0;
    int i = 0;
    while (i < length)
    {
        if (c[i] == 'a' || c[i] == 'e' || c[i] == 'i' || c[i] == 'o' || c[i] == 'u' || c[i] == 'A' || c[i] == 'E' || c[i] == 'I' || c[i] == 'O' || c[i] == 'U')
        {
            vow_count++;
            i++;
        }
        else
        {
            con_count++;
            i++;
        }
    }
    cout << "Vowel count = " << vow_count << endl;
    cout << "consonant count = " << con_count << endl;

    return 0;
}