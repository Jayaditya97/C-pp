#include <iostream>

class base {
public:
	void printHello() {
		std::cout << "hello world" << std::endl;
	}
};

class childBase : public base {
public:
	void printChild() {
		std::cout << "This is child class" << std::endl;
	}
};

class subChild : public childBase {
public:
	void printSubChild() {
		std::cout << "This is sub child class" << std::endl;
	}
};

int main() {
	base b;
	b.printHello();

	childBase c;
	c.printHello(); // Access parent function
	c.printChild(); // Child's own function

	subChild d;
	d.printHello();   // Access parent function
	d.printChild();   // Access child function
	d.printSubChild(); // Access sub-child function

	return 0;
}
