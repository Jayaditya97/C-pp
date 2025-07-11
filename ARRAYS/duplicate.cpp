#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    int arr[100];
    bool visited[100] = {false};

    cout << "Enter array elements:\n";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "\nDuplicate elements are:\n";
    for (int i = 0; i < n; i++) {
        if (visited[i]) continue;

        bool isDuplicate = false;
        for (int j = i + 1; j < n; j++) {
            if (arr[i] == arr[j]) {
                if (!isDuplicate) {
                    cout << arr[i] << endl;
                    isDuplicate = true;
                }
                visited[j] = true; // mark duplicates as visited
            }
        }
    }

    return 0;
}
