// WRITE A PROGRAM TO CREATE NUMBER GUESSING GAME

#include <iostream>
#include<cstdlib>
#include<ctime>

using namespace std;

int main(){
    srand(time(0));
    int number=rand()%100;
    int g_no;
    int tries=0;
    cout<<"WELCOME TO NUMBER GUESSING GAME"<<endl;
    cout<<"Enter any number between 1-100"<<endl;
    while(g_no!=number){
        cout<<"Enter your guess number : ";
        cin>>g_no;
        tries++;
        if(g_no<number){
            cout<<"The number is greater than your guess....TRY AGAIN... "<<endl;
        }
        else if(g_no>number){
            cout<<"The number is less than your guess.....TRY AGAIN... "<<endl;
        }
        else{
            cout<<"YOU WON...in "<<tries<<" tries ";
        }
    }

return 0;
}