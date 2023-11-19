#include <iostream>

// Recursive function to calculate the sum of an array of integers
int calculateSum(int arr[], int size) {
    // Base case: when the array has only one element
    if (size == 1) {
        return arr[0];
    } else {
        // Recursive case: sum of the current element and the sum of the rest of the array
        return arr[0] + calculateSum(arr + 1, size - 1);
    }
}

int main() {
    // Example usage
    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);

    // Calculate the sum using the recursive function
    int sum = calculateSum(arr, size);

    // Display the result
    std::cout << "Sum of the array elements: " << sum << std::endl;

    return 0;
}
