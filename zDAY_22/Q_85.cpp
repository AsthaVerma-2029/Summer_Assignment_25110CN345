// WRITE A PROGRAM TO CEHCK PALINDROME STRING

#include <iostream>
#include <string>

using namespace std;

int main(){
    string s;
    cout<<"Enter the string : ";
    cin>>s;
    int end=s.length()-1;
    int start=0;
    int flag=1;
    while (start<end)
    {
        if (tolower(s[start])!=tolower(s[end])){
            flag=0;

        }
        start++;
        end--;
    }
    if(flag==0){
        cout<<"The string is not palindrome ";

    }
    else{
        cout<<"The string is palindrome ";
    }

return 0;
}


















