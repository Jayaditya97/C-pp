#include <iostream>
using namespace std;

int main() {
    int n;

    // Input size
    cout << "Enter the number of elements: ";
    cin >> n;

    int arr[100]; // assuming max size

    // Input elements
    cout << "Enter the elements:\n";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Initialize min and max
    int largest = arr[0];
    int smallest = arr[0];

    // Find largest and smallest
    for (int i = 1; i < n; i++) {
        if (arr[i] > largest) {
            largest = arr[i];
        }
        if (arr[i] < smallest) {
            smallest = arr[i];
        }
    }

    // Output results
    cout << "Largest element = " << largest << endl;
    cout << "Smallest element = " << smallest << endl;

    return 0;
}
