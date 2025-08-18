#include <iostream>
using namespace std;

class bankAccount {
    int accountNo;
    int balance;
public:
    bankAccount(int accNo, int bal) {
        accountNo = accNo;
        balance = bal;
    }

    void deposit() {
        int amount;
        cout << "Enter amount to deposit: ";
        cin >> amount;
        balance += amount;
        cout << "Deposited " << amount << ".\n";
    }

    void withdraw() {
        int amount;
        cout << "Enter amount to withdraw: ";
        cin >> amount;
        if (amount > balance) {
            cout << "Insufficient balance!\n";
        } else {
            balance -= amount;
            cout << "Withdrawn " << amount << ".\n";
        }
    }

    void display() {
        cout << "Account No: " << accountNo << ", Balance: " << balance << endl;
    }
};

int main() {
    int accNo, bal;
    cout << "Enter Account Number: ";
    cin >> accNo;
    cout << "Enter Initial Balance: ";
    cin >> bal;

    bankAccount acc(accNo, bal);
    acc.display();

    acc.deposit();
    acc.display();

    acc.withdraw();
    acc.display();

    return 0;
}