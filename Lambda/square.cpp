#include <iostream>

int main() {
    auto square = [](int x) { return x * x; };
    int num = 6;
    std::cout << "Square of " << num << " is " << square(num) << std::endl;
    return 0;
}
