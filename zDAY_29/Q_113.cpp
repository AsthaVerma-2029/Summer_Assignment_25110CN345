//WRITE A PROGRAM TO CREATE A MENU DRIVEN CALCULATOR 

#include <iostream>
using namespace std;

void add() {
    double num1, num2;
    cout << "\nEnter two numbers: ";
    cin >> num1 >> num2;
    
    if (cin.fail()) {
        cin.clear(); 
        cin.ignore(1000, '\n');
        cout << "Error: Invalid numbers.\n";
        return;
    }
    cout << "Result: " << num1 << " + " << num2 << " = " << (num1 + num2) << "\n";
}
void subtract() {
    double num1, num2;
    cout << "\nEnter two numbers: ";
    cin >> num1 >> num2;

    if (cin.fail()) {
        cin.clear(); 
        cin.ignore(1000, '\n');
        cout << "Error: Invalid numbers.\n";
        return;
    }
    cout << "Result: " << num1 << " - " << num2 << " = " << (num1 - num2) << "\n";
}
void multiply() {
    double num1, num2;
    cout << "\nEnter two numbers: ";
    cin >> num1 >> num2;

    if (cin.fail()) {
        cin.clear(); 
        cin.ignore(1000, '\n');
        cout << "Error: Invalid numbers.\n";
        return;
    }
    cout << "Result: " << num1 << " * " << num2 << " = " << (num1 * num2) << "\n";
}
void divide() {
    double num1, num2;
    cout << "\nEnter two numbers: ";
    cin >> num1 >> num2;

    if (cin.fail()) {
        cin.clear(); 
        cin.ignore(1000, '\n');
        cout << "Error: Invalid numbers.\n";
        return;
    }

    if (num2 == 0) {
        cout << "Error: Division by zero is not allowed!\n";
    } else {
        cout << "Result: " << num1 << " / " << num2 << " = " << (num1 / num2) << "\n";
    }
}
int main() {
    int choice;
    while (true) {
        cout << "\n..........................................Menu Calculator............................................\n";
        cout << "1. Addition (+)\n";
        cout << "2. Subtraction (-)\n";
        cout << "3. Multiplication (*)\n";
        cout << "4. Division (/)\n";
        cout << "5. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;
        if (cin.fail()) {
            cin.clear();
            cin.ignore(1000, '\n');
            cout << "\n[!] Error: Please enter a valid menu number.\n";
            continue;
        }
        switch (choice) {
            case 1:
                add();
                break;
            case 2:
                subtract();
                break;
            case 3:
                multiply();
                break;
            case 4:
                divide();
                break;
            case 5:
                cout << "Exiting calculator............\n";
                return 0;
            default:
                cout << "Invalid choice! Please select 1-5.\n";
        }
    }
    return 0;
}
