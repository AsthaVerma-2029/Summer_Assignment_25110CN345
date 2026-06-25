//WRITE A PROGRAM TO SORT WORDS BY LENGTH

#include <iostream>
using namespace std;

int main(){
    string words[200];
    int count=0;
    cout<<" Enter the words : ";
    string name;
    while(cin>>name){
        if(name=="end"){
            break;
        }
        words[count]=name;
        count++;
    }
    for(int i=0;i<count-1;i++){
        for(int j=0;j<count-1-i;j++){
            if(words[j].length()>words[j+1].length()){
                string x=words[j];
                words[j]=words[j+1];
                words[j+1]=x;
            }
        }
    }
    cout<<"The sorted words are :";
    for(int i=0;i<count;i++){
        cout<<"\n"<<words[i];
    }
    
return 0;
}
