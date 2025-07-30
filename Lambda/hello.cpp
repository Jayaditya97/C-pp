#include <iostream>
using namespace std;
// This code defines a lambda function that prints "Hello, World!" to the console.
auto hello = []() {
    cout << "Hello, World!" << endl;
};
int main() {
    hello();  // Call the lambda function
    return 0;
}
