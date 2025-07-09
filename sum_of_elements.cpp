#include <iostream>
using namespace std;

int main() {
    int rows, cols;
    // Get dimensions
    cout << "Enter number of rows: ";
    cin >> rows;
    cout << "Enter number of columns: ";
    cin >> cols;
    int arr[100][100]; // Fixed max size for simplicity
    int sum = 0;

    // Input elements
    cout << "Enter elements:\n";
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << "Element [" << i << "][" << j << "]: ";
            cin >> arr[i][j];
            sum += arr[i][j]; // Add to sum directly
        }
    }

    // Display the array
    cout << "\nThe 2D array is:\n";
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << arr[i][j] << "\t";
        }
        cout << endl;
    }

    // Display the sum
    cout << "\nSum of all elements = " << sum << endl;

    return 0;
}