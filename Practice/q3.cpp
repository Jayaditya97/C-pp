#include <iostream>
using namespace std;

int main() {
    int arr[100], freq[100], n;

    cout << "Enter size of array: ";
    cin >> n;

    cout << "Enter elements of array:\n";
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
        freq[i] = -1;
    }

    for(int i = 0; i < n; i++) {
        int count = 1;
        for(int j = i + 1; j < n; j++) {
            if(arr[i] == arr[j]) {
                count++;
                freq[j] = 0;
            }
        }
        if(freq[i] != 0) {
            freq[i] = count;
        }
    }

    cout << "Element\tFrequency\n";
    for(int i = 0; i < n; i++) {
        if(freq[i] != 0) {
            cout << arr[i] << "\t" << freq[i] << endl;
        }
    }

    return 0;
}
