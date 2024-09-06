#include <stdio.h>

int main() {
    int arr[] = {12, 45, 67, 23, 89, 34, 56};
    int n = sizeof(arr) / sizeof(arr[0]);

    int sum = 0;
    int max = arr[0];
    int min = arr[0];

    // Calculate sum, find maximum and minimum
    for (int i = 0; i < n; i++) {
        sum += arr[i];

        if (arr[i] > max) {
            max = arr[i];
        }

        if (arr[i] < min) {
            min = arr[i];
        }
    }

    // Calculate average
    double average = (double)sum / n;

    // Print results
    printf("Sum of elements: %d\n", sum);
    printf("Average of elements: %.2f\n", average);
    printf("Maximum element: %d\n", max);
    printf("Minimum element: %d\n", min);

    return 0;
}

