// WRITE A PROGRAM TO SORT NAMES ALPHABETICALLY

#include <iostream>
using namespace std;

int main(){
    string names[200];
    int count=0;
    cout<<" Enter the names( type end to finish) : ";
    string name;
    while(cin>>name){
        if(name=="end"){
            break;
        }
        names[count]=name;
        count++;
    }
    for(int i=0;i<count-1;i++){
        for(int j=0;j<count-1-i;j++){
            if(names[j]>names[j+1]){
                string x=names[j];
                names[j]=names[j+1];
                names[j+1]=x;
            }
        }
    }
    cout<<"The sorted names are :";
    for(int i=0;i<count-1;i++){
        cout<<"\n"<<names[i];
    }
    
return 0;
}
































