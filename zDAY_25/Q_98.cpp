// WRITE A PROGRAM TO FIND COMMON CHARACTERS IN A STIRNG

#include <iostream>
#include<string>
using namespace std;

int main(){
    string s;
    cout<<" Enter the string : ";
    getline(cin,s);
    for(int i=0;i<s.length();i++){
        int flag=0;
        for(int j=0;j<i;j++){
            if(s[i]==s[j]){
                flag=1;
                break;
            }
        }
        if(flag==1){
            continue;
        }
        if(s[i] == ' '){
            continue;
        }
        int count=0;
        for(int k=0;k<s.length();k++){
            if(s[i]==s[k])
            count++;

        }
        if(count>1){
            cout<<"The repeated string '"<<s[i]<<"' is "<<count<<" times"<<endl;
        }
    }   
return 0;
}
