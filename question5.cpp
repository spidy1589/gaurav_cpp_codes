#include <iostream>
using namespace std;

// Abstract class representing a BankAccount
class BankAccount {
private:
    string accountHolderName;
    double balance;
    
public:
    // Constructor to initialize account holder's name and balance
    BankAccount(string name, double initialBalance) {
        accountHolderName = name;
        balance = initialBalance;
    }

    // Function to deposit an amount
    void deposit(double amount) {
        if (amount > 0) {
            balance += amount;
            cout << "Deposited: " << amount << endl;
        } else {
            cout << "Invalid deposit amount!" << endl;
        }
    }

    // Function to withdraw an amount
    void withdraw(double amount) {
        if (amount > 0 && amount <= balance) {
            balance -= amount;
            cout << "Withdrawn: " << amount << endl;
        } else {
            cout << "Invalid or insufficient amount!" << endl;
        }
    }

    // Function to display account information
    void display() {
        cout << "Account Holder: " << accountHolderName << endl;
        cout << "Current Balance: " << balance << endl;
    }
};

int main() {
    BankAccount account("Gaurav Negi", 6969.0);
    account.display();
    account.deposit(1000);
    account.withdraw(2000);
    account.display();
    
    return 0;
}
