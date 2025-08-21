#include <iostream>
using namespace std;

void display(int a) {
    cout << "Integer: " << a << endl;
}

void display(double b) {
    cout << "Double: " << b << endl;
}

void display(int a, int b) {
    cout << "Sum: " << a + b << endl;
}

int main() {
    display(5);         // calls int version
    display(5.5);       // calls double version
    display(3, 4);      // calls two-int version
}
