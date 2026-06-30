// WRITE A PROGRAM TO CRATE MENU DRIVEN ARRAY OPERATIONS SYSTEM

#include <iostream>
using namespace std;

const int arr_max = 100;


void insertElement(int arr[], int &size) {
    if (size >= arr_max) {
        cout << "Error: Array is full! Cannot insert more elements.\n";
        return;
    }
    int value;
    cout << "Enter the integer value to insert: ";
    cin >> value;

    if (cin.fail()) {
        cin.clear(); cin.ignore(1000, '\n');
        cout << "Error: Invalid input. Only integers are allowed.\n";
        return;
    }

    arr[size] = value;
    size++; 
    cout << "Value " << value << " inserted successfully.\n";
}
void deleteElement(int arr[], int &size) {
    if (size == 0) {
        cout << "Array is empty. Nothing to delete.\n";
        return;
    }
    int target;
    cout << "Enter the value to delete: ";
    cin >> target;

    if (cin.fail()) {
        cin.clear(); cin.ignore(1000, '\n');
        cout << "Error: Invalid input.\n";
        return;
    }

    int foundIndex = -1;
    for (int i = 0; i < size; i++) {
        if (arr[i] == target) {
            foundIndex = i;
            break; 
        }
    }

    if (foundIndex != -1) {
        for (int i = foundIndex; i < size - 1; i++) {
            arr[i] = arr[i + 1];
        }
        size--; 
        cout << "Value " << target << " deleted successfully.\n";
    } else {
        cout << "Value " << target << " not found in the array.\n";
    }
}
void searchElement(int arr[], int size) {
    if (size == 0) {
        cout << "Array is empty.\n";
        return;
    }

    int target;
    cout << "Enter the value to search: ";
    cin >> target;

    if (cin.fail()) {
        cin.clear(); cin.ignore(1000, '\n');
        cout << "Error: Invalid input.\n";
        return;
    }

    for (int i = 0; i < size; i++) {
        if (arr[i] == target) {
            cout << "Value found at Index position: " << i << "\n";
            return;
        }
    }
    cout << "Value " << target << " not found in the array.\n";
}
void displayArray(int arr[], int size) {
    if (size == 0) {
        cout << "\nArray is empty.\n";
        return;
    }

    cout << "\nCurrent Array Elements: [ ";
    for (int i = 0; i < size; i++) {
        cout << arr[i];
        if (i < size - 1) {
            cout << ", "; 
        }
    }
    cout << " ] (Size: " << size << ")\n";
}

int main() {
    int arr[arr_max];
    int size = 0; 
    int choice;

    while (true) {
        cout << "\n=== Array Operations Menu ===\n";
        cout << "1. Insert Element\n";
        cout << "2. Delete Element by Value\n";
        cout << "3. Search Element\n";
        cout << "4. Display Array\n";
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
                insertElement(arr, size);
                break;
            case 2:
                deleteElement(arr, size);
                break;
            case 3:
                searchElement(arr, size);
                break;
            case 4:
                displayArray(arr, size);
                break;
            case 5:
                cout << "Exiting program. Goodbye!\n";
                return 0;
            default:
                cout << "Invalid choice! Please select a option between 1 and 5.\n";
        }
    }
    return 0;
}