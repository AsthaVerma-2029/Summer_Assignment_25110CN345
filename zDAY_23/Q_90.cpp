// WRITE A PROGRAM TO FIND FIRST REPEATING CHARACTER 

#include <iostream>
#include<string>
using namespace std;

int main(){
    string s;
    cout<<" Enter the string : ";
    getline(cin,s);
    char rep;
    int flag=0;
    for(int i=0;i<s.length();i++){
        for(int j=0;j<s.length();j++){
            if(i!=j && s[i]==s[j]){
                rep=s[i];
                flag=1;
                break;
            }
            
        }
        if(flag==1){
            break;
        }

    }
    if(flag==1){
        cout<<"The first repeating character is: "<<rep<<endl;
    }
    else{
        cout<<"All characters are non repeating ";
    }
    
return 0;
}
