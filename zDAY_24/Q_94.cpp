//WRITE A PROGRAM TO COMPRESS A STRING

#include <iostream>
#include<string>
using namespace std;

int main() {
    string s;
    cout<<"Enter the sentence : ";
    getline(cin,s);

    string comp_string;
    int count=1;
    for(int i=0;i<s.length();i++){
            if (s[i]==s[i+1]){
                count+=1;
            }
            else{
                comp_string+=s[i];
                comp_string+=to_string(count);
                count=1;
            }
    }
    cout<<"The compressed string is : "<<comp_string<<endl;
    if(comp_string.length()>s.length()){
        cout<<"The original sring is good to go so no need of compression : "<<s<<endl;
    }

    
    return 0;
}