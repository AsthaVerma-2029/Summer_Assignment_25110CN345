// WRITE a PROGRAM TO CHECK STRING ROTATION


#include <iostream>
using namespace std;

int main(){
    string s1,s2;
    cout<<"Enter the string 1 : ";
    cin>>s1;
    cout<<"Enter the string 2 : ";
    cin>>s2;
    if(s1.length()!=s2.length()){
        cout<<"They are not rotations ";
        return 0;
    }
    int flag=0;
    for(int i=0;i<s1.length();i++){
        if(s1==s2){
            flag=1;
            break;
        }
        s1.push_back(s1[0]);
        s1.erase(0,1);
    }
    if(flag==1){
        cout<<"They are rotations ";

    }
    else{cout<<"They are not rotations ";
    }
return 0;
}