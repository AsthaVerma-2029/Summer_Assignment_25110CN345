// WRITE A PROGRAM TO MINI EMPLOYEE MANGEMENT SYSTEM 

#include <iostream>
using namespace std;

const int limit_emp = 100;

struct employee {
    int emp_id;
    string name;
    double salary;
};

employee employees[limit_emp];
int count = 0;


void add_emp() {
    if (count >= limit_emp) {
        cout << "System full! Cannot add more employees.\n";
        return;
    }

    employee emp;

    cout << "\nEnter employee ID: ";
    cin >> emp.emp_id;
    if (cin.fail()) {
        cin.clear();
        cin.ignore(1000, '\n');
        cout << "Error: Invalid ID entry.\n";
        return;
    }

    cin.ignore(); 
    cout << "Enter Name: ";
    getline(cin, emp.name);

    cout << "Enter salary: ";
    cin >> emp.salary;
    if (cin.fail()) {
        cin.clear();
        cin.ignore(1000, '\n');
        cout << "Error: Invalid salary entry.\n";
        return;
    }

    employees[count] = emp;
    count++;

    cout << "employee added successfully!\n";
}

void display_emp() {
    if (count == 0) {
        cout << "\nNo employee records found.\n";
        return;
    }

    cout << "\nEmployee\t\tName\t\t\tsalary\n";
    cout << "\n";
    for (int i = 0; i < count; i++) {
        cout << employees[i].emp_id << "\t\t" 
             << employees[i].name << "\t\t\t" 
             << employees[i].salary << "\n";
    }
}

void search_emp() {
    if (count == 0) {
        cout << "\nNo employee records found.\n";
        return;
    }

    int search_id;
    cout << "\nEnter employee ID to search: ";
    cin >> search_id;
    if (cin.fail()) {
        cin.clear();
        cin.ignore(1000, '\n');
        cout << "Error: Invalid ID entry.\n";
        return;
    }

    for (int i = 0; i < count; i++) {
        if (employees[i].emp_id == search_id) {
            cout << "\nemployee Found:\n";
            cout << "employee ID: " << employees[i].emp_id << "\n";
            cout << "Name       : " << employees[i].name << "\n";
            cout << "salary        : " << employees[i].salary << "\n";
            return;
        }
    }
    cout << "employee with employee ID " << search_id << " not found.\n";
}
void delete_emp() {
    if (count == 0) {
        cout << "\nNo employee records found to delete.\n";
        return;
    }

    int del_emp;
    int found = -1;

    cout << "\nEnter employee ID to delete: ";
    cin >> del_emp;
    if (cin.fail()) {
        cin.clear();
        cin.ignore(1000, '\n');
        cout << "Error: Invalid ID entry.\n";
        return;
    }

    for (int i = 0; i < count; i++) {
        if (employees[i].emp_id == del_emp) {
            found = i;
            break;
        }
    }

    if (found != -1) {
        for (int i = found; i < count - 1; i++) {
            employees[i] = employees[i + 1];
        }
        count--; 
        cout << "employee record deleted successfully!\n";
    } else {
        cout << "employee with employee ID " << del_emp << " not found.\n";
    }
}

int main(){
    int choice;
    while(choice!=5){
        cout<<"\n...............................WELCOME TO EMPLOYEE MANAGEMENT SYSTEM.............................................\n";
        cout<<"1. Add employee record \n";
        cout<<"2. Display all records \n";
        cout<<"3. Search employee record \n";
        cout<<"4. Delete employee record \n";
        cout<<"5. Exit \n\n";
        cout<<"Enter your choice : ";
        cin>>choice;
        if (cin.fail()) {
            cin.clear(); 
            cin.ignore(1000, '\n');
            cout << "Invalid input! Please enter a valid number.\n";
            continue;
        }
        switch (choice) {
            case 1:
                add_emp();
                break;
            case 2:
                display_emp();
                break;
            case 3:
                search_emp();
                break;
            case 4:
                delete_emp();
                break;
            case 5:
                cout << "Exiting program.....\n";
                return 0;
            default:
                cout << "Invalid choice! Please try again.\n";
        }
    }
    
return 0;
}