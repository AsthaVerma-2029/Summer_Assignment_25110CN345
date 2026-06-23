// WRITE A PROGRAM TO TO FIND MAXIMUM OCCURING CHARACTER

#include <iostream>
#include<string>
using namespace std;

int main(){
    string s;
    cout<<" Enter the string : ";
    getline(cin,s);
    char max_ch;
    int freq;
    int max_freq=0;
    for(int i=0;i<s.length();i++){
        int freq=0;
        for(int j=0;j<s.length();j++){
            if (s[i]==s[j]){ 
                freq=freq+1;
            }
        }
        if (max_freq<freq){
            max_freq=freq;
            max_ch=s[i];
        }

    }
     cout<<"The character with maximum frequency is '"<<max_ch<<"' and the frequency is  "<<max_freq; 
return 0;
}