// WRITE A PROGRAM TO FIND FIRST NON REPEATING CHARACTER 

#include <iostream>
#include<string>
using namespace std;

int main(){
    string s;
    cout<<" Enter the string : ";
    getline(cin,s);
    char non_rep;
    int found=0;
    for(int i=0;i<s.length();i++){
        int flag=0;
        for(int j=0;j<s.length();j++){
            if(i!=j && s[i]==s[j]){
                flag=1;
                break;
            }
            
        }
        if(flag!=1){
            non_rep=s[i];
            found=1;
            break;
        }

    }
    if(found==1){
        cout<<"The first non repeating character is: "<<non_rep<<endl;
    }
    else{
        cout<<"All characters are repeating ";
    }
    
return 0;
}

