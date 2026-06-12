// WRITE A PROGRAM TO WRITE FUNCTION FOR FIBONACCI

#include <iostream>
using namespace std;
void fibonacci(int n){
    int n1 = 1, n2 = 1,temp;
    cout << "The fibonacci series is as follows : " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << n1<<" ";
        temp = n1 + n2;
        n1 = n2;
        n2 = temp;
    }
}

int main(){
    int n;
    cout<<"Enter the number of terms : ";
    cin>>n;
    fibonacci(n);

return 0;
}