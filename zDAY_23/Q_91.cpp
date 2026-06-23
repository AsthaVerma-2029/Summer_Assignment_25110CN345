// WRITE A PROGRAM TO ANAGRAM STRINGS
#include <iostream>
#include<string>
using namespace std;

int main(){
    string s1,s2;
    cout<<" Enter a string : ";
    getline(cin,s1);
    cout<<" Enter another string : ";
    getline(cin,s2);
    int flag=1;
 
    if(s1.length()!=s2.length()){
        cout<<"The strings are not anagrams "<<endl;
        flag=0;
    }
    if(flag==1){
    
        for(int i=0;i<s1.length();i++){
            int found=0;
            for(int j=0;j<s1.length();j++){
                if(tolower(s1[i])==tolower(s2[j])){
                    found =1;
                    s2[j]='#';
                    break;
                }
            }
            if (found==0){
                flag=0;
                break;
            }

        
        }
        if(flag==1){
            cout<<"The strings are anagrams ";
        }
        else{
            cout<<"The strings are anagrams :";
    }
    }
    
return 0;
}