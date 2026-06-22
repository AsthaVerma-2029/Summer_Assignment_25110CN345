// WRITE A PROGRAM TO PRINT CHARACTER FREQUENCY


#include <iostream>
#include<string>
using namespace std;

int main() {
    string s;
    cout<<" Enter the string : ";
    getline(cin,s);

    char ch;
    cout<<"Enter the character : ";
    cin>>ch;
    int count=0;

    for(char c: s){
        if (c==ch){
            count++;
            
        }
    }
    cout<<"The frequency of the character '"<<ch<< "' is : "<<count<<endl;
    return 0;
}


















