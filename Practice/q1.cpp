#include <iostream>
using namespace std;

bool isPrime(int n) {
    if (n < 2) return false;
    for (int i = 2; i * i <= n; ++i) {
        if (n % i == 0) return false;
    }
    return true;
}

int main() {
    for (int i = 1; i <= 10; ++i) {
        cout << i << " ";
        if (i % 2 == 0)
            cout << "even";
        else
            cout << "odd";
        if (isPrime(i))
            cout << " prime";
        cout << endl;
    }
    return 0;
}