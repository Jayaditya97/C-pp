#include <iostream>
#include <memory>

int main() {
    std::shared_ptr<int> p1(new int(99));  // creates a shared_ptr pointing to an int with value 99
    std::shared_ptr<int> p2 = p1;          // p2 shares ownership of the same memory as p1

    std::cout << "p1: " << *p1 << ", p2: " << *p2 << std::endl;
    std::cout << "Count: " << p1.use_count() << std::endl;

    return 0;
}
