#include <iostream>

int main() {
    int arr[] = {1,2,3,4,5,6,7,8,9,10};
    auto is_even = [](int x) { return x % 2 == 0; };
    std::cout << "Even numbers in array: ";
    for (int i = 0; i < 10; ++i) {
        if (is_even(arr[i])) {
            std::cout << arr[i] << " ";
        }
    }
    std::cout << std::endl;
    return 0;
}
