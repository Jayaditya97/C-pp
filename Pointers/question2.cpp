#include <iostream>
using namespace std;

// 1. Calculate sum of two integers
int calculate(int a, int b) {
    return a + b;
}

// 2. Calculate product of two floats
float calculate(float x, float y) {
    return x * y;
}

// 3. Calculate average of three integers (as float)
float calculate(int a, int b, int c) {
    return (a + b + c) / 3.0f; // ensure float division
}

int main() {
    int sum = calculate(10, 20);                  // calls int version
    float product = calculate(2.5f, 4.0f);         // calls float version
    float average = calculate(10, 20, 30);         // calls 3-int version

    // Output results
    cout << "Sum of 10 and 20: " << sum << endl;
    cout << "Product of 2.5 and 4.0: " << product << endl;
    cout << "Average of 10, 20, 30: " << average << endl;

    return 0;
}
