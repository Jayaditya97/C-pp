#include <iostream>
#include <memory>
using namespace std;

int main() {
    unique_ptr<int> p1(new int(42));

    cout << *p1 << endl; // Optional: prints 42

    return 0;
}
