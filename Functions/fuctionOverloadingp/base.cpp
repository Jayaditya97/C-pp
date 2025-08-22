#include <iostream>
using namespace std;


#include <iostream>

class Base {
public:
	virtual void show() {
		std::cout << "Base class show() called" << std::endl;
	}
};

class Derived : public Base {
public:
	void show() override {
		std::cout << "Derived class show() called" << std::endl;
	}
};

int main() {
	Base* b;
	Derived d;
	b = &d;
	b->show(); // Calls Derived's show() due to overriding
	return 0;
}


