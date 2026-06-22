// WRITE A PROGRAM TO REMOVE SPACES FROM A STRING

#include <iostream>
using namespace std;

int main(){
    string s;
    cout<<" Enter the string : ";
    getline(cin,s);
    int counter=0;
    for(int i=0;i<s.length();i++){
        if(s[i]!=' '){
            s[counter]=s[i];
            counter++;
        }
    }
    s.resize(counter);
    
    cout<<"The new string is : "<<s;
return 0;
}



















