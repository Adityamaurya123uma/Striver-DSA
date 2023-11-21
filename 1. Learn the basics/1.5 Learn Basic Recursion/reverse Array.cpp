#include <iostream>

void reverseArray(int arr[], int start, int end) {
    if (start >= end) {
        return; // base case
    }

    // Swap elements at the start and end indices
    int temp = arr[start];
    arr[start] = arr[end];
    arr[end] = temp;

    // Recursively call the function with updated start and end indices
    reverseArray(arr, start + 1, end - 1);
}

int main() {
    const int size = 5;
    int arr[size] = {1, 2, 3, 4, 5};

    std::cout << "Original array: ";
    for (int i = 0; i < size; ++i) {
        std::cout << arr[i] << " ";
    }

    reverseArray(arr, 0, size - 1);

    std::cout << "\nReversed array: ";
    for (int i = 0; i < size; ++i) {
        std::cout << arr[i] << " ";
    }

    return 0;
}
