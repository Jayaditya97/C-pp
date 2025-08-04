#include <iostream>
#include "lib1.h"
#include "lib2.h"

int main() {
    int a = 5;
    int b = 10;

    // Call Lib1's calculate
    std::cout << "Lib1::calculate(5, 10): " << Lib1::calculate(a, b) << std::endl;

    // Call Lib2's calculate
    std::cout << "Lib2::calculate(5, 10): " << Lib2::calculate(a, b) << std::endl;

    return 0;
}