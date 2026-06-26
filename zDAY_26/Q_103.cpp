// WRITE A PROGRAM TO CREATE ATM STIMULATION
#include <iostream>
#include<string>

using namespace std;
void menu();
void menu(){
    cout<<"\t ATM MENU "<<endl;
    cout<<" 1.  CHECK BALANCE "<<endl;
    cout<<" 2.  WITHDRAW MONEY"<<endl;
    cout<<" 3.  DEPOSIT MONEY "<<endl;
    cout<<" 4.  EXIT"<<endl;
}


void deposit_money(double &bal);
void deposit_money(double &bal){
    double amt;
    cout<<"Enter the amount to be deposited : ";
    cin>>amt;
    if(amt>0){
        bal+=amt;
        cout<<"SUCCESFULLY DEPOSITED "<<amt<<" rupees"<<" to your account..."<<endl;
    }
    else{
        cout<<"INVALID AMOUNT... "<<endl;
    }
}
void withdraw_money(double &bal);
void withdraw_money(double &bal){
    double amt;
    cout<<"Enter  the amount to be withdrawn : ";
    cin>>amt;
    if(amt>bal){
        cout<<"INSUFFICIENT BALANCE..."<<endl;
    }
    else if(amt<0){
        cout<<"Enter the valid amount..";
        cin>>amt;
    }
    else{
        bal=bal-amt;
        cout<<"Successfully withdrawn "<<amt<<" rupees"<<" from your account"<<endl;
    }

}
void check_balance(double &bal);
void check_balance(double &bal){
    cout<<"Your current account balance is : "<<bal<<endl;
}


int main(){
    const int acc_pin=1122;
    double bal=2000;
    int choice;
    string name;
    cout<<"Enter your Name : ";
    cin>>name;
    cout<<endl;
    int attempts=0;
    int input_pin;
    while(attempts<3){
        cout<<"Enter your account pin : ";
        cin>>input_pin;
        cout<<endl;
        if(input_pin==acc_pin){
            menu();
            while (choice!=4){
                cout<<"Enter your choice : ";
                cin>>choice;
                switch (choice)
                {
                case 1:
                    check_balance(bal);
                    break;
                case 2:
                    withdraw_money(bal);
                    break;
                case 3:
                    deposit_money(bal);
                    break;
                case 4:
                    cout<<"\t THANK YOU !!  HAVE A NICE DAY...";
                    exit(0);
            
                default:
                    cout<<"INVALID CHOICE.."<<endl;
                    cout<<"Enter a valid choice : ";
                    cin>>choice;
                }
            }
        }
        else{
            attempts++;
            cout << "Incorrect PIN !! '"<< (3 - attempts) <<  "' Attempts remaining: " <<endl;
        }
    }
return 0;
}