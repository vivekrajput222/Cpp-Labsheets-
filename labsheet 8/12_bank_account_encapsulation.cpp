// Program 12: Encapsulation using a BankAccount class
#include <iostream>
using namespace std;

class BankAccount {
private:
    double balance;

public:
    explicit BankAccount(double openingBalance = 0) : balance(openingBalance < 0 ? 0 : openingBalance) {}

    void deposit(double amount) {
        if (amount > 0) {
            balance += amount;
            cout << "Deposit successful.\n";
        } else cout << "Deposit amount must be positive.\n";
    }

    void withdraw(double amount) {
        if (amount <= 0) cout << "Withdrawal amount must be positive.\n";
        else if (amount > balance) cout << "Insufficient balance.\n";
        else {
            balance -= amount;
            cout << "Withdrawal successful.\n";
        }
    }

    void displayBalance() const {
        cout << "Current balance: " << balance << '\n';
    }
};

int main() {
    double openingBalance, depositAmount, withdrawalAmount;
    cout << "Enter opening balance: ";
    cin >> openingBalance;
    BankAccount account(openingBalance);

    cout << "Enter deposit amount: ";
    cin >> depositAmount;
    account.deposit(depositAmount);

    cout << "Enter withdrawal amount: ";
    cin >> withdrawalAmount;
    account.withdraw(withdrawalAmount);

    account.displayBalance();
    return 0;
}
