#include <iostream>
using namespace std;

class A {
public:
    void show() {
        cout << "Hello from A" << endl;
    }
};

// Virtual inheritance
class B : virtual public A { };
class C : virtual public A { };

// D now inherits only one copy of A
class D : public B, public C { };

int main() {
    D obj;
    obj.show(); //No ambiguity
    return 0;
}
