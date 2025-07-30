#include <functional>
#include <iostream>
void runTWICE(std::function<void()> func) {
    func();
    func();
}

int main() {
    auto greet = []() {
        std::cout << "Hello, World!" << std::endl;
    };
    // Using the runTWICE function to call the lambda function twice
    runTWICE(greet);
    return 0;
}