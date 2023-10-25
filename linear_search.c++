#include <iostream>

int linearSearch(int arr[], int n, int target) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == target) {
            return i;  // Element found, return its index
        }
    }
    return -1;  // Element not found
}

int main() {
    int arr[] = {5, 8, 12, 34, 62, 1, 7, 25};
    int n = sizeof(arr) / sizeof(arr[0]);
    int target = 12;

    int result = linearSearch(arr, n, target);

    if (result != -1) {
        std::cout << "Element " << target << " found at index " << result << std::endl;
    } else {
        std::cout << "Element " << target << " not found in the array." << std::endl;
    }

    return 0;
}
