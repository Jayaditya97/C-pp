#include <iostream>
using namespace std;

// Base class
class Shape {
public:
    void displayShapeType() {
        cout << "This is a Shape." << endl;
    }
};

// Derived class 1
class Circle : public Shape {
public:
    void display() {
        cout << "This is a Circle." << endl;
    }
};

// Derived class 2
class Rectangle : public Shape {
public:
    void display() {
        cout << "This is a Rectangle." << endl;
    }
};

int main() {
    Circle c;
    Rectangle r;

    // Access base class method
    c.displayShapeType();
    c.display();

    r.displayShapeType();
    r.display();

    return 0;
}
