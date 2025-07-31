#include <iostream>
using namespace std;

// Function using call by value
void doubleByValue(int x) {
    x = x * 2;
    cout << "Inside doubleByValue: x = " << x << endl;
}

// Function using call by reference
void doubleByReference(int &x) {
    x = x * 2;
    cout << "Inside doubleByReference: x = " << x << endl;
}

int main() {
    int a = 5;
    int b = 5;

    cout << "Before doubleByValue: a = " << a << endl;
    doubleByValue(a);
    cout << "After doubleByValue: a = " << a << " (unchanged)\n" << endl;

    cout << "Before doubleByReference: b = " << b << endl;
    doubleByReference(b);
    cout << "After doubleByReference: b = " << b << " (modified)\n";

    return 0;
}
