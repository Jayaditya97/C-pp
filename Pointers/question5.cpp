#include <iostream>
using namespace std;

class Calculator {
public:
    // 1. Two integers: returns sum
    int process(int a, int b) {
        cout << "Called: process(int, int)\n";
        return a + b;
    }

    // 2. Two pointers to integers: returns sum of values
    int process(int* a, int* b) {
        cout << "Called: process(int*, int*)\n";
        return *a + *b;
    }

    // 3. Integer by reference: doubles the value and returns it
    int process(int &a) {
        cout << "Called: process(int&)\n";
        a *= 2;
        return a;
    }

    // 4. Integer by value and pointer: returns product
    int process(int a, int* b) {
        cout << "Called: process(int, int*)\n";
        return a * (*b);
    }
};

int main() {
    Calculator calc;

    int x = 10, y = 20;

    // 1. Two integers
    int result1 = calc.process(x, y);
    cout << "Sum (int, int): " << result1 << "\n\n";

    // 2. Two pointers
    int* px = &x;
    int* py = &y;
    int result2 = calc.process(px, py);
    cout << "Sum (*int, *int): " << result2 << "\n\n";

    // 3. Integer by reference
    int a = 5;
    int result3 = calc.process(a);
    cout << "Double (int&): " << result3 << " (original a is now " << a << ")\n\n";

    // 4. Integer and pointer
    int b = 4;
    int result4 = calc.process(3, &b);
    cout << "Product (int, *int): " << result4 << "\n";

    return 0;
}
