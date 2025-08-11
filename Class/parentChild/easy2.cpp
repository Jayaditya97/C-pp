#include <iostream>
using namespace std;

// Base class
class Person {
public:
    void introduce() {
        cout << "Hi, I am a person." << endl;
    }
};

// Derived class
class Student : public Person {
public:
    void study() {
        cout << "I am studying." << endl;
    }
};

int main() {
    Student s; // create Student object
    s.introduce(); // method from base class
    s.study();     // method from derived class
    return 0;
}
