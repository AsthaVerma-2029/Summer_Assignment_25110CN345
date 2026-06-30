// WRITE A PROGRAM TO CREATE INVENTORY MANAGEMENT SYSTEM


#include <iostream>
#include <string>
using namespace std;

const int lim_items = 100;
struct Item {
    int id;
    string name;
    int quantity;
    float price;
};

Item inventory[lim_items];
int count = 0;

void addItem() {
    if (count >= lim_items) {
        cout << "Warehouse full! Cannot add more inventory records.\n";
        return;
    }
    Item itm;
    cout << "\nEnter Item ID: ";
    cin >> itm.id;
    if (cin.fail()) {
        cin.clear(); cin.ignore(1000, '\n');
        cout << "Error: Item ID must be a valid integer! Operation aborted.\n";
        return;
    }
    
    for (int i = 0; i < count; i++) {
        if (inventory[i].id == itm.id) {
            cout << "Error: Item ID " << itm.id << " already exists in stock!\n";
            return;
        }
    }
    cin.ignore(); 
    cout << "Enter Item Name: ";
    getline(cin, itm.name);
    if (itm.name.empty()) {
        cout << "Error: Item name field cannot be left empty!\n";
        return;
    }
    cout << "Enter Quantity in Stock: ";
    cin >> itm.quantity;
    if (cin.fail() || itm.quantity < 0) {
        cin.clear(); cin.ignore(1000, '\n');
        cout << "Error: Invalid quantity count! Operation aborted.\n";
        return;
    }
    cout << "Enter Unit Price: ";
    cin >> itm.price;
    if (cin.fail() || itm.price < 0) {
        cin.clear(); cin.ignore(1000, '\n');
        cout << "Error: Invalid unit price! Operation aborted.\n";
        return;
    }
    inventory[count] = itm;
    count++;

    cout << "Item added to inventory safely!\n";
}
void displayInventory() {
    if (count == 0) {
        cout << "\nNo items found in the stock ledger.\n";
        return;
    }

    cout << "\nID       Item Name                      Quantity          Unit Price  Total Value\n";
    cout << "-----------------------------------------------------------------------------------\n";
    
    for (int i = 0; i < count; i++) {
        cout << inventory[i].id << "      ";
        if (inventory[i].id < 100) cout << " ";

        cout << inventory[i].name;
        int nameSpaces = 31 - inventory[i].name.length();
        for (int s = 0; s < nameSpaces; s++) {
            cout << " ";
        }

        cout<< inventory[i].quantity;
        int qtySpaces = 12 - to_string(inventory[i].quantity).length();
        for (int s = 0; s < qtySpaces; s++) {
            cout << "  ";
        }

        cout<<inventory[i].price;
        int priceSpaces = 11 - to_string(inventory[i].price).length(); 
        for (int s = 0; s < priceSpaces; s++) {
            cout << "  ";
        }

        cout<<" " <<(inventory[i].quantity * inventory[i].price) << "\n";
    }
}
void searchItem() {
    if (count == 0) {
        cout << "\nInventory catalog is currently empty.\n";
        return;
    }

    int searchId;
    cout << "\nEnter Item ID to search: ";
    cin >> searchId;
    if (cin.fail()) {
        cin.clear(); cin.ignore(1000, '\n');
        cout << "Error: Invalid ID input entry.\n";
        return;
    }

    for (int i = 0; i < count; i++) {
        if (inventory[i].id == searchId) {
            cout << "\n--- Warehouse Stock Details ---\n";
            cout << "Item ID    : " << inventory[i].id << "\n";
            cout << "Item Name  : " << inventory[i].name << "\n";
            cout << "Quantity   : " << inventory[i].quantity << " units\n";
            cout << "Unit Price : " << inventory[i].price << "\n";
            cout << "Total Value: " << (inventory[i].quantity * inventory[i].price) << "\n";
            cout << "--------------------------------\n";
            return;
        }
    }
    cout << "Item with ID " << searchId << " not found in system.\n";
}
void deleteItem() {
    if (count == 0) {
        cout << "\nNo inventory records available to delete.\n";
        return;
    }

    int deleteId;
    int foundIndex = -1;

    cout << "\nEnter Item ID to delete from registry: ";
    cin >> deleteId;
    if (cin.fail()) {
        cin.clear(); cin.ignore(1000, '\n');
        cout << "Error: Invalid entry.\n";
        return;
    }

    for (int i = 0; i < count; i++) {
        if (inventory[i].id == deleteId) {
            foundIndex = i;
            break;
        }
    }

    if (foundIndex != -1) {
        for (int i = foundIndex; i < count - 1; i++) {
            inventory[i] = inventory[i + 1];
        }
        count--; 
        cout << "Item removed from inventory records successfully!\n";
    } else {
        cout << "Item ID " << deleteId << " not found.\n";
    }
}

int main() {
    int choice;

    while (true) {
        cout << "\n........................................Inventory Management System...................................\n";
        cout << "1. Add New Item Stock\n";
        cout << "2. Display Inventory Ledger\n";
        cout << "3. Search Item by ID\n";
        cout << "4. Delete Item Record\n";
        cout << "5. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;
        if (cin.fail()) {
            cin.clear();
            cin.ignore(1000, '\n');
            cout << "\n[!] Error: Lette$ not allowed. Please enter a number.\n";
            continue;
        }

        switch (choice) {
            case 1:
                addItem();
                break;
            case 2:
                displayInventory();
                break;
            case 3:
                searchItem();
                break;
            case 4:
                deleteItem();
                break;
            case 5:
                cout << "Exiting system.........!\n";
                return 0;
            default:
                cout << "Invalid choice! Please try again.\n";
        }
    }
    return 0;
}


