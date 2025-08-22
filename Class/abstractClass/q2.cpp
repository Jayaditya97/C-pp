#include <iostream>
using namespace std;

class Shape { // Abstract class
protected:
    int sides;
public:
    Shape(int s) { // Constructor
        sides = s;
        cout << "Shape constructor called.\n";
    }
    virtual void draw() = 0; // abstracted func or pure virtual function
    virtual ~Shape() { // Destructor
        cout << "This is Shape destructor.\n";
    }
};

class triangle : public Shape {
public:
    triangle() : Shape(3) { // call shape constructor
        cout << "Triangle constructor called.\n";
    }
    void draw() override {
        cout << "Drawing a triangle with " << sides << " sides";
    }
    ~triangle() { // Destructor
        cout << "This is triangle destructor.\n";
    }
};

int main() {
    //Shape s(4) not allowed as it is abstracted class
    triangle t;
    t.draw();
    return 0;
}