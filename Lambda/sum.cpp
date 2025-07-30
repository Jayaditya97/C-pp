#include <iostream>

int main() {
    auto add = [](int a, int b) {
        return a + b;
    };

    int a = 10;
    int b = 20;
    std::cout << add(a, b) << std::endl;
    return 0;
}
