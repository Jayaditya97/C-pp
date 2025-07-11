#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter size of square matrix (n x n): ";
    cin >> n;

    int matrix[100][100];

    // Input matrix elements
    cout << "Enter matrix elements:\n";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> matrix[i][j];
        }
    }

    int mainDiagonal = 0, secondaryDiagonal = 0;

    for (int i = 0; i < n; i++) {
        mainDiagonal += matrix[i][i];              // Top-left to bottom-right
        secondaryDiagonal += matrix[i][n - 1 - i]; // Top-right to bottom-left
    }

    cout << "Sum of main diagonal = " << mainDiagonal << endl;
    cout << "Sum of secondary diagonal = " << secondaryDiagonal << endl;

    // Optional: If matrix is odd-sized, center element is counted twice, adjust:
    if (n % 2 == 1) {
        int center = matrix[n / 2][n / 2];
        cout << "Corrected total diagonal sum = " << (mainDiagonal + secondaryDiagonal - center) << endl;
    } else {
        cout << "Total diagonal sum = " << (mainDiagonal + secondaryDiagonal) << endl;
    }

    return 0;
}
