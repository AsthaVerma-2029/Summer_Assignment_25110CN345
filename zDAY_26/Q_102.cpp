// WRITE A PROGRAM TO CREATE VOTING ELIGIBILITY SYSTEM

#include <iostream>
#include <string>
using namespace std;

int main(){
    cout<<endl<<"\t WELCOME TO VOTING ELIGIBILTY SYSTEM...."<<endl;
    string name;
    int age;
    cout<<endl<<"Enter the name and age of the person : ";
    cin>>name>>age;
    if(age<18){
        cout<<name<<" is not eligible for voting"<<endl;
    }
    else if (age>=18 && age<120){
        cout<<name<<" is eligible for voting ";
    }
    else{
            cout<<"INVALID AGE...Enter the name and age again...";
            cin>>name>>age;
            if ((age<120 && age>=8))
            {
                cout<<name<<" is eligible for voting ";
            }
            

    }
return 0;
}