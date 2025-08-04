#include <iostream>
namespace A {
    int valA() { return 2; }
}
namespace B {
    int valB() { return 5; }
}

using namespace A;
using namespace B;

int main() {
    std::cout << valA() + valB() << std::endl;
    return 0;
}