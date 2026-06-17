// WRITE A PROGRAM TO INTESECTION OF ARRAYS

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

    int intsected_array[n1+n2];
    int count = 0;

    for (int i = 0; i < n1; i++) {
        for (int j = 0; j < n2; j++) {
            if (num1[i] == num2[j]) {
                int flag=0;
                for (int k = 0; k < count; k++) {
                    if (intsected_array[k] == num1[i]) {
                        flag=1;
                        break;
                    }
                }
                if (flag==0) {
                    intsected_array[count] = num1[i];
                    count+=1;
                }
                break;
            }
        }
    }

    cout <<endl<<"Intersection of the arrays : ";
    for (int i = 0; i < count; i++) {
        cout << intsected_array[i] << " ";
    }


    return 0;
}