#include <iostream>
using namespace std;

class Box {
    int secret;
public:
    Box(int s) : secret(s) {}
    friend void revealSecret(const Box& b);
};

void revealSecret(const Box& b) {
    cout << b.secret << endl;
}

int main() {
    Box b(42);
    revealSecret(b);
    return 0;
}