#include <iostream>
#include <string>
using namespace std;

class Student {
public:
    string name;
    int rollNumber;
    float marks[3];

    void input() {
        cout << "Enter name: ";
        getline(cin, name);
        cout << "Enter roll number: ";
        cin >> rollNumber;
        cout << "Enter marks for 3 subjects: ";
        for (int i = 0; i < 3; ++i) {
            cin >> marks[i];
        }
    }

    float average() {
        float sum = 0;
        for (int i = 0; i < 3; ++i) {
            sum += marks[i];
        }
        return sum / 3;
    }
};

int main() {
    Student students[3];
    for (int i = 0; i < 3; ++i) {
        cout << "\nEnter details for student " << i + 1 << ":\n";
        students[i].input();
    }

    cout << "\nAverages:\n";
    for (int i = 0; i < 3; ++i) {
        cout << "Student " << i + 1 << " (" << students[i].name << ") - Average Marks: " << students[i].average() << endl;
    }
    return 0;
}