// WRITE A PROGRAM TO CREATE SALARY MANAGEMENT SYSTEM


#include <iostream>
#include <string>

using namespace std;

const int max_lim = 100;


struct salary_management {
    int id;
    string name;
    float base_sal;
    float allowance;   
    float tax_ded; 
    float net_sal;    
};


salary_management payroll[max_lim];
int emp_count = 0;


void add_record();
void add_record() {
    if (emp_count >= max_lim) {
        cout << "System full! Cannot add more payroll records.\n";
        return;
    }

    salary_management emp;

    cout << "\nEnter Employee ID: ";
    cin >> emp.id;
    if (cin.fail()) {
        cin.clear();
        cin.ignore(1000, '\n');
        cout << "Error: Invalid ID entry.\n";
        return;
    }
    
    
    cin.ignore(); 
    cout << "Enter Name: ";
    getline(cin, emp.name);

    cout << "Enter Base Monthly Salary: ";
    cin >> emp.base_sal;
    if (cin.fail()) {
        cin.clear();
        cin.ignore(1000, '\n');
        cout << "Error: Invalid salary entry.\n";
        return;
    }

    cout << "Enter Total Allowances: ";
    cin >> emp.allowance;
    if (cin.fail()) {
        cin.clear();
        cin.ignore(1000, '\n');
        cout << "Error: Invalid allowance entry.\n";
        return;
    }

    cout << "Enter Tax Deductions: ";
    cin >> emp.tax_ded;
    if (cin.fail()) {
        cin.clear();
        cin.ignore(1000, '\n');
        cout << "Error: Invalid tax deduction entry.\n";
        return;
    }

   
    emp.net_sal = (emp.base_sal + emp.allowance) - emp.tax_ded;

    payroll[emp_count] = emp;
    emp_count++;

    cout << "Salary record calculated and added successfully!\n";
}
void display();
void display() {
    if (emp_count == 0) {
        cout << "\nNo financial records found.\n";
        return;
    }

    
    cout << "\nID       Name                           Base      Allow     Tax       Net Salary\n";
    cout << "....................................................................................................\n";
    
    for (int i = 0; i < emp_count; i++) {
        
        cout << payroll[i].id << "      ";
        if (payroll[i].id < 100) cout << " ";

        
        cout << payroll[i].name;
        int spacesNeeded = 31 - payroll[i].name.length();
        for (int s = 0; s < spacesNeeded; s++) {
            cout << " ";
        }

        cout << payroll[i].base_sal << "       "
             << payroll[i].allowance << "        "
             << payroll[i].tax_ded << "        "
             << payroll[i].net_sal << "\n";
    }
}
void search_record();
void search_record() {
    if (emp_count == 0) {
        cout << "\nNo financial records found.\n";
        return;
    }

    int search_id;
    cout << "\nEnter Employee ID to generate salary slip: ";
    cin >> search_id;
    if (cin.fail()) {
        cin.clear();
        cin.ignore(1000, '\n');
        cout << "Error: Invalid ID entry.\n";
        return;
    }

    for (int i = 0; i < emp_count; i++) {
        if (payroll[i].id == search_id) {
            cout << "\n\n";
            cout << "        MONTHLY SALARY SLIP        \n";
            cout << "\n";
            cout << "Employee ID   : " << payroll[i].id << "\n";
            cout << "Employee Name : " << payroll[i].name << "\n";
            cout << "\n";
            cout << "(+) Base Salary : $" << payroll[i].base_sal << "\n";
            cout << "(+) Allowance   : $" << payroll[i].allowance << "\n";
            cout << "(-) Tax Cut     : $" << payroll[i].tax_ded << "\n";
            cout << "\n";
            cout << "(=) Net Pay     : $" << payroll[i].net_sal << "\n";
            cout << "\n";
            return;
        }
    }
    cout << "Record with Employee ID " << search_id << " not found.\n";
}
void del_record();
void del_record() {
    if (emp_count == 0) {
        cout << "\nNo records found to delete.\n";
        return;
    }

    int del_id;
    int found = -1;

    cout << "\nEnter Employee ID to remove from payroll: ";
    cin >> del_id;
    if (cin.fail()) {
        cin.clear();
        cin.ignore(1000, '\n');
        cout << "Error: Invalid ID entry.\n";
        return;
    }

    for (int i = 0; i < emp_count; i++) {
        if (payroll[i].id == del_id) {
            found = i;
            break;
        }
    }

    if (found != -1) {
        for (int i = found; i < emp_count - 1; i++) {
            payroll[i] = payroll[i + 1];
        }
        emp_count--; 
        cout << "Salary record wiped from ledger successfully!\n";
    } else {
        cout << "Record with ID " << del_id << " not found.\n";
    }
}

int main() {
    int choice;

    while (true) {
        cout << "\n>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>> Salary Management System >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>\n";
        cout << "1. Add Salary Record\n";
        cout << "2. Display Payroll Sheets\n";
        cout << "3. Search Salary Slip by ID\n";
        cout << "4. Delete Salary Record\n";
        cout << "5. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

         if (cin.fail()) {
            cin.clear(); 
            cin.ignore(1000, '\n');
            cout << "Invalid input! Please enter a valid number.\n";
            continue;
        }

        switch (choice) {
            case 1:
                add_record();
                break;
            case 2:
                display();
                break;
            case 3:
                search_record();
                break;
            case 4:
                del_record();
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

