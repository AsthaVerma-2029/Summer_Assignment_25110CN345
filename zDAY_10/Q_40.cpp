// WRITE A PROGRAM TO PRINT CHARACTER PYRAMID
//     A
//    ABA
//   ABCBA
//  ABCDCBA
// ABCDEDCBA

#include <iostream>
using namespace std;

int main()
{
    for (int i = 1; i <= 5; i++)
    {
        for (int j = 0; j < 5 - i; j++)
        {
            cout << " ";
        }
        for (int j = 65; j < 65 + i; j++)
        {
            cout << (char)j;
        }
        for (int j = 65 + i - 2; j >= 65; j--)
        {
            cout << (char)j;
        }
        cout << endl;
    }

    return 0;
}