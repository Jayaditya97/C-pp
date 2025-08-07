#include <iostream>

class demo {
public:
    int value;
    // Non-parameterized constructor
    demo() {
        value = 0;
        std::cout << "Non-parameterized constructor called. Value: " << value << std::endl;
    }
    // Parameterized constructor
    demo(int v) {
        value = v;
        std::cout << "Parameterized constructor called. Value: " << value << std::endl;
    }
};

int main() {
    // Normal object creation
    demo d1;
    demo d2(42);

    // Object creation by pointer
    demo* d3 = new demo();
    demo* d4 = new demo(99);

    // Clean up
    delete d3;
    delete d4;
    return 0;
}
