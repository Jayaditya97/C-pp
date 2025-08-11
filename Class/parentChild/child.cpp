#include <iostream>

class base {
public:
	void show() {
		std::cout << "Base class function" << std::endl;
	}
};

class b1 : public base {
	// public inheritance
};

class b2 : private base {
public:
	void accessBase() {
		show();
	}
};

class b3 : protected base {
public:
	void accessBase() {
		show();
	}
};

int main() {
	b1 obj1;
	obj1.show(); // Allowed: public inheritance

	b2 obj2;
	obj2.accessBase(); // Access via member function
	// obj2.show(); // Not allowed: private inheritance

	b3 obj3;
	obj3.accessBase(); // Access via member function
	// obj3.show(); // Not allowed: protected inheritance

	return 0;
}
