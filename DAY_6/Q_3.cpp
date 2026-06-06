// WRITE A PROGRAM TO COUNT SET BITS IN A NUMBER 

#include <iostream>
#include<string>
using namespace std;


string decimal_binary(int n)
{
    if (n == 0)
    {
        return "0";
    }
    string bin_str = "";            //take a empty string
    while (n > 0)
    {
        int r = n % 2;
        bin_str = bin_str + to_string(r);            //the string is added to the empty string
        n /= 2;
    }
    string binary(bin_str.rbegin(), bin_str.rend());        //the string is reversed and stored in string called binary

    return binary;
}
int main()
{
    int n,count=0;
    cout << "Enter the  number : ";
    cin >> n;
    int n1=n;
    string str_binary=decimal_binary(n);

    for(char c:str_binary){
        if(c=='1'){
            count+=1;
        }
    }
    cout<<"The set bits in "<<n1<<" is "<<count;    
    return 0;
    }




       //we use directly string method because
     // *** this code has limits upto 19 digits long if we input 100000-binary(11110100001001000000)is 20 digits it will throw out of range error*****

    // int n1=n;
    // string bin = decimal_binary(n);
    // long long int int_bin=stoll(bin);
    // while(int_bin!=0){
    //     if(int_bin%10==1){
    //         count+=1;
    //     }
    //     int_bin/=10;
    // }
    // cout<<"The set bits in "<<n1<<" is "<<count;
    
