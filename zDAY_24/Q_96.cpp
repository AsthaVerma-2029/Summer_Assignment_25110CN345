//WRITE A PROGRAM TO REMOVE DUPLICATE CHARACTERS

#include <iostream>
#include<string>
using namespace std;

int main() {
    string s;
    cout<<"Enter the sentence : ";
    getline(cin,s);

    string new_s;
    for(int i=0;i<s.length();i++){
        int flag=0;
        for(int j=0;j<i;j++){
            if(i!=j && s[i]==s[j]){
                flag=1;
                break;
                
            }
            
        }
        if(flag==0){
            new_s+=s[i];
        }
    }
    cout<<"The string without duplicates is : "<<new_s<<endl;
    
    return 0;
}