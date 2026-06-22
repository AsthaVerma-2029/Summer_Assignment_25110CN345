// WRITE A PROGRAM TO COUNT WORDS IN A SENTENCE


#include <iostream>
#include<string>
using namespace std;

int main() {
    string s;
    cout<<"Enter the sentence :";
    getline(cin,s);

    int count=0;
    for(int i=0;i<s.length();i++){
        if (s[i]!=' ' && s[i+1]==' ' || s[i+1]=='\0'){
            count++;
            
        }
    }
    cout<<"The words in the string are : "<<count<<endl;
    return 0;
}




















