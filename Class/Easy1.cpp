#include <iostream>
#include <string>

class Student {
public:
    std::string name;
    int rollNo;
};

int main() {
    Student s;
    s.name = "Jagga daku";
    s.rollNo = 68;
    std::cout << "Name: " << s.name << std::endl;
    std::cout << "Roll No: " << s.rollNo << std::endl;
    return 0;
}

