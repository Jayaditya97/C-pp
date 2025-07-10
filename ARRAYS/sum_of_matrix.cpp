#include<iostream>
using namespace std;

int main() {
    int rows, cols;
    cout << "Enter the number of rows: ";
    cin >> rows;
    cout << "Enter the number of columns: ";
    cin >> cols;

    int arr1[rows][cols], arr2[rows][cols], sum[rows][cols];

    cout << "Enter elements of Arr1:\n";
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) {
            cout << "Arr1[" << i << "][" << j << "]: ";
            cin >> arr1[i][j];
        }
    }

    cout << "Enter elements of Arr2:\n";
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) {
            cout << "Arr2[" << i << "][" << j << "]: ";
            cin >> arr2[i][j];
        }
    }

    // Sum of matrices
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) {
            sum[i][j] = arr1[i][j] + arr2[i][j];
        }
    }

    // Printing the result matrix
    cout << "Sum of both matrices:\n";
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) {
            cout << sum[i][j] << " ";
        }
        cout << endl; 
    }

    return 0;
}