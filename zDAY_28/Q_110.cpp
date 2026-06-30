// WRITE A PROGRAM TO CREATE BANK ACCOUNT SYSTEM


#include <iostream>
#include <string>

using namespace std;

const int lim_acc = 100;

struct Account {
    int accountNumber;
    string holderName;
    float balance;
};
Account bank[lim_acc];
int accountCount = 0;

void createAccount();
void createAccount() {
    if (accountCount >= lim_acc) {
        cout << "Bank registry full! Cannot open more accounts.\n";
        return;
    }

    Account acc;

    cout << "\nEnter New Account Number: ";
    cin >> acc.accountNumber;
    if (cin.fail()) {
        cin.clear(); cin.ignore(1000, '\n');
        cout << "Error: Account number must be a valid integer! Operation aborted.\n";
        return;
    }
 
    for (int i = 0; i < accountCount; i++) {
        if (bank[i].accountNumber == acc.accountNumber) {
            cout << "Error: Account number " << acc.accountNumber << " already exists!\n";
            return;
        }
    }

    cin.ignore(); 
    cout << "Enter Account Holder Name: ";
    getline(cin, acc.holderName);
    if (acc.holderName.empty()) {
        cout << "Error: Name field cannot be left empty!\n";
        return;
    }

    cout << "Enter Initial Deposit Balance: ";
    cin >> acc.balance;
    if (cin.fail() || acc.balance < 0) {
        cin.clear(); cin.ignore(1000, '\n');
        cout << "Error: Invalid initial balance amount! Operation aborted.\n";
        return;
    }

    bank[accountCount] = acc;
    accountCount++;

    cout << "Account created successfully!\n";
}
void displayAccounts();
void displayAccounts() {
    if (accountCount == 0) {
        cout << "\nNo accounts found in the bank registry.\n";
        return;
    }

    cout << "\nAcc No   Account Holder                 Balance\n";
    cout << "---------------------------------------------------\n";
    
    for (int i = 0; i < accountCount; i++) {
        cout << bank[i].accountNumber << "      ";
        if (bank[i].accountNumber < 100) cout << " ";

        cout << bank[i].holderName;
        int spacesNeeded = 31 - bank[i].holderName.length();
        for (int s = 0; s < spacesNeeded; s++) {
            cout << " ";
        }

        cout << "" << bank[i].balance << "\n";
    }
}
void searchAccount();
void searchAccount() {
    if (accountCount == 0) {
        cout << "\nNo records available to search.\n";
        return;
    }

    int searchNo;
    cout << "\nEnter Account Number to search: ";
    cin >> searchNo;
    if (cin.fail()) {
        cin.clear(); cin.ignore(1000, '\n');
        cout << "Error: Invalid input entry.\n";
        return;
    }

    for (int i = 0; i < accountCount; i++) {
        if (bank[i].accountNumber == searchNo) {
            cout << "\nAccount Statement Record:\n";
            cout << "Account No : " << bank[i].accountNumber << "\n";
            cout << "Holder Name: " << bank[i].holderName << "\n";
            cout << "Balance    : " << bank[i].balance << "\n";
            return;
        }
    }
    cout << "Account with number " << searchNo << " not found.\n";
}
void depositWithdraw();
void depositWithdraw() {
    if (accountCount == 0) {
        cout << "\nNo available accounts to transact with.\n";
        return;
    }

    int targetNo;
    cout << "\nEnter Account Number: ";
    cin >> targetNo;
    if (cin.fail()) {
        cin.clear(); cin.ignore(1000, '\n');
        cout << "Error: Invalid entry.\n";
        return;
    }

    for (int i = 0; i < accountCount; i++) {
        if (bank[i].accountNumber == targetNo) {
            int action;
            float amount;
            cout << "\nAccount found! Current balance: " << bank[i].balance << "\n";
            cout << "1. Deposit Money\n2. Withdraw Money\nChoose action: ";
            cin >> action;

            if (cin.fail() || (action != 1 && action != 2)) {
                cin.clear(); cin.ignore(1000, '\n');
                cout << "Invalid action! Transaction terminated.\n";
                return;
            }

            cout << "Enter transaction amount: ";
            cin >> amount;
            if (cin.fail() || amount <= 0) {
                cin.clear(); cin.ignore(1000, '\n');
                cout << "Invalid amount parameter! Transaction terminated.\n";
                return;
            }

            if (action == 1) {
                bank[i].balance += amount;
                cout << "Successfully deposited " << amount << ". New balance: " << bank[i].balance << "\n";
            } else {
                if (amount > bank[i].balance) {
                    cout << "Transaction rejected: Insufficient funds available.\n";
                } else {
                    bank[i].balance -= amount;
                    cout << "Successfully withdrew " << amount << ". Remaining balance: " << bank[i].balance << "\n";
                }
            }
            return;
        }
    }
    cout << "Account number not found.\n";
}
void deleteAccount();
void deleteAccount() {
    if (accountCount == 0) {
        cout << "\nNo records found to delete.\n";
        return;
    }

    int deleteNo;
    int foundIndex = -1;

    cout << "\nEnter Account Number to close: ";
    cin >> deleteNo;
    if (cin.fail()) {
        cin.clear(); cin.ignore(1000, '\n');
        cout << "Error: Invalid entry.\n";
        return;
    }

    for (int i = 0; i < accountCount; i++) {
        if (bank[i].accountNumber == deleteNo) {
            foundIndex = i;
            break;
        }
    }

    if (foundIndex != -1) {
        for (int i = foundIndex; i < accountCount - 1; i++) {
            bank[i] = bank[i + 1];
        }
        accountCount--; 
        cout << "Account closed and ledger record removed successfully!\n";
    } else {
        cout << "Account Number " << deleteNo << " not found.\n";
    }
}

int main() {
    int choice;

    while (true) {
        cout << "\n........................................Bank Account Management System........................................\n";
        cout << "1. Create New Account\n";
        cout << "2. Display All Accounts\n";
        cout << "3. Search Account Details\n";
        cout << "4. Deposit / Withdraw Money\n";
        cout << "5. Close Account (Delete Record)\n";
        cout << "6. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        if (cin.fail()) {
            cin.clear();
            cin.ignore(1000, '\n');
            cout << "\n[!] Error: Letters not allowed. Please enter a number.\n";
            continue;
        }

        switch (choice) {
            case 1:
                createAccount();
                break;
            case 2:
                displayAccounts();
                break;
            case 3:
                searchAccount();
                break;
            case 4:
                depositWithdraw();
                break;
            case 5:
                deleteAccount();
                break;
            case 6:
                cout << "Exiting system.....\n";
                return 0;
            default:
                cout << "Invalid choice! Please try again.\n";
        }
    }
    return 0;
}
