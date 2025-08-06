#include <iostream>
using namespace std;

class BankAccount {
private:
    int balance;

public:
    // Constructor with initial balance
    BankAccount(int initialBalance) {
        if (initialBalance >= 0)
            balance = initialBalance;
        else
            balance = 0;
    }

    // Withdraw function
    void withdraw(int amount) {
        if (amount > 0 && amount <= balance) {
            balance -= amount;
        }
    }

    // Getter
    int getBalance() {
        return balance;
    }
};

int main() {
    // Set initial balance during object creation
    BankAccount acc1(1000);
    BankAccount acc2(500);

    acc1.withdraw(200);
    acc2.withdraw(200);

    cout << "Account 1 balance: " << acc1.getBalance() << endl;
    cout << "Account 2 balance: " << acc2.getBalance() << endl;

    // acc1.balance = 99999; // ❌ Error: balance is private

    return 0;
}
