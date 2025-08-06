#include <iostream>
using namespace std;

class Wallet {
private:
    int balance;
public:
    void setBalance(int amount) {
        balance = amount;
    }
    int getBalance() {
        return balance;
    }
};
int main() {
    Wallet w;
    w.setBalance(500);
    cout << w.getBalance() << endl;         

    return 0;
}
