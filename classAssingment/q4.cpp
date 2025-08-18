#include <iostream>

class Account {
    static int counter;
public:
    Account() { counter++; }
    Account() { counter--; }
    static void showCount() {
        std::cout << "Objects alive: " << counter << std::endl;
    }
};

int Account::counter = 0;

int main() {
    Account a1, a2;
    Account::showCount();
    {
        Account a3;
        Account::showCount();
    }
    Account::showCount();
    return 0;
}