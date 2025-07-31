#include <iostream>
using namespace std;

// swap values using pointers
void swapValues(int* x, int* y) {
    int temp = *x;
    *x = *y;
    *y = temp;
}
//largest value among three pointers
int* findLargest(int* x, int* y, int* z) {
    if (*x >= *y && *x >= *z)
        return x;
    else if (*y >= *x && *y >= *z)
        return y;
    else
        return z;
}

int main() {
    int a = 10, b = 20, c = 30;
    int *pA = &a, *pB = &b, *pC = &c;
    cout << "Original Values:\n";
    cout << "a = " << *pA << ", Address: " << pA << endl;
    cout << "b = " << *pB << ", Address: " << pB << endl;
    cout << "c = " << *pC << ", Address: " << pC << endl;
    swapValues(pA, pB); // swap a and b
    swapValues(pB, pC); // swap b and c

    cout << "\nAfter Swapping:\n";
    cout << "a = " << *pA << ", b = " << *pB << ", c = " << *pC << endl;

    int* largestPtr = findLargest(pA, pB, pC);
    cout << "Largest number"<< *largestPtr;

    return 0;
}
