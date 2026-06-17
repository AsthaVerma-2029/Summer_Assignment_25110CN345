// WRITE A PROGRAM TO FIND COMMON ELEMENTS

#include <iostream>
using namespace std;

int main() {
    int n1,n2;
    cout<<"Enter the Size of array 1 : ";
    cin>>n1;
    while(n1<=0){
        cout<<"Size cannot be NEAGATIVE or ZERO"<<endl;
        cout<<"Again Enter the Size of array 1: ";
        cin>>n1;
    }
    int num1[n1];
    cout<<"Enter the elements of the array : ";
    for(int i=0;i<n1;i++){
        cin>>num1[i];
    }
    cout<<"Enter the Size in array 2: ";
    cin>>n2;
    while(n2<=0){
        cout<<"Size cannot be NEAGATIVE or ZERO"<<endl;
        cout<<"Again Enter the Size of array 2: ";
        cin>>n2;
    }
    int num2[n2];
    cout<<"Enter the elements of the array : ";
    for(int i=0;i<n2;i++){
        cin>>num2[i];
    }

    int com_ele[n1+n2];
    int count = 0;

    for (int i = 0; i < n1; i++) {
        for (int j = 0; j < n2; j++) {
            if (num1[i] == num2[j]) {
                int flag = 0;
                for (int k = 0; k < count; k++) {
                    if (com_ele[k] == num1[i]) {
                        flag = 1;
                        break;
                    }
                }
                if (flag==0) {
                    com_ele[count++] = num1[i];
                }
                break;
            }
        }
    }

    cout <<endl<<"common elements is/are : ";
    for (int i = 0; i < count; i++) {
        cout << com_ele[i] << " ";
    }
    cout << endl;

    return 0;
}