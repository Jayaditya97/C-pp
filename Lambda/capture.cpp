#include <iostream>
using namespace std;

int main() {
    int a = 5, b = 3;
    auto add = [=]() { return a + b; };
    cout << "Sum: " << add() << endl;
    return 0;
}