#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    int arr[100], freq[100];
    
    // Input array elements
    cout << "Enter elements:\n";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        freq[i] = -1;  // initialize frequency array
    }

    // Calculate frequencies
    for (int i = 0; i < n; i++) {
        if (freq[i] == -1) { // not counted yet
            int count = 1;
            for (int j = i + 1; j < n; j++) {
                if (arr[i] == arr[j]) {
                    count++;
                    freq[j] = 0; // mark as counted
                }
            }
            freq[i] = count;
        }
    }

    // Print frequency
    cout << "\nElement Frequencies:\n";
    for (int i = 0; i < n; i++) {
        if (freq[i] != 0) {
            cout << arr[i] << " -> " << freq[i] << " times" << endl;
        }
    }

    return 0;
}
