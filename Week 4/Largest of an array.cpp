#include <stdio.h>

int main() {
    int arr[] = {10, 45, 67, 89, 34, 22, 99, 50};
    int n = sizeof(arr) / sizeof(arr[0]);

    int largest = arr[0];  // Assume the first element is the largest

    // Loop through the array to find the largest element
    for (int i = 1; i < n; i++) {
        if (arr[i] > largest) {
            largest = arr[i];  // Update largest if a larger element is found
        }
    }

    printf("The largest element in the array is: %d\n", largest);

    return 0;
}

