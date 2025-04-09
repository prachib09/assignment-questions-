//Create a program to simulate an ATM machine using a switch statement. Include options for withdrawal, deposit, balance inquiry, and exit, with error handling for invalid input and insufficient balance.
#include <iostream>
using namespace std;

int main() {
    double balance = 1000.0;
    int choice;
    double amount;

    while (true) {
        cout << "1. Withdraw" << endl;
        cout << "2. Deposit" << endl;
        cout << "3. Check Balance" << endl;
        cout << "4. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1: cout << "Enter amount to withdraw: ";
                cin >> amount;
                if (amount > balance) {
                    cout << "Insufficient balance!" << endl;
                } else if (amount <= 0) {
                    cout << "Invalid amount!" << endl;
                } else {
                    balance -= amount;
                    cout << "Withdrawal successful! New balance: " << balance << endl;
                }
                break;

            case 2: cout << "Enter amount to deposit: ";
                cin >> amount;
                if (amount <= 0) {
                    cout << "Invalid amount!" << endl;
                } else {
                    balance += amount;
                    cout << "Deposit successful! New balance: " << balance << endl;
                }
                break;

            case 3: cout << "Current balance: " << balance << endl;
                break;

            case 4: cout << "Thank you for using the ATM. Goodbye!" << endl;
                return 0;

                cout << "Invalid choice! Please select a valid option." << endl;
        }
    }

    return 0;
}