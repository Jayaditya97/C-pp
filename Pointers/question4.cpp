#include <iostream>
using namespace std;

// Function to calculate sum using pointer and size
int calculateSum(int* arr, int size) {
    int sum = 0;
    for(int i = 0; i < size; i++) {
        sum += *(arr + i); // pointer arithmetic
    }
    return sum;
}

int main() {
    // Declare array
    int numbers[5] = {10, 20, 30, 40, 50};

    // Pointer to first element
    int* ptr = numbers;

    // Traverse and calculate sum using pointer
    int sum = 0;
    for (int i = 0; i < 5; i++) {
        sum += *(ptr + i); // pointer arithmetic
    }

    cout << "Sum using pointer arithmetic: " << sum << endl;

    // Using the function
    int functionSum = calculateSum(numbers, 5);
    cout << "Sum using function and pointer: " << functionSum << endl;

    return 0;
}
