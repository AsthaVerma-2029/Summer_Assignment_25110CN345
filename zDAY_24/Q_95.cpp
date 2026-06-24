// WRITE A PROGRAM TO FIND LONGEST WORD

#include <iostream>
#include<string>
using namespace std;

int main() {
    string s;
    cout<<"Enter the sentence : ";
    getline(cin,s);

    string word;
    string lon_word;
    for(int i=0;i<s.length();i++){
        if (i<s.length() && s[i]!=' '){
            word+=s[i];
        }
        else{
            if(word.length()>lon_word.length()){
                lon_word=word;
            }
            word="";
        }
    }
    cout<<"The longest word is : "<<lon_word<<endl;
    cout<<"The length of the longest word is  : "<<lon_word.length()<<endl;
    
    return 0;
}
