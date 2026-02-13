// 09-binary-search/binary_search.c
#include <stdio.h>

// Iterative binary search function
int binarySearchIterative(int arr[], int left, int right, int target) {
    while (left <= right) {
        int mid = left + (right - left) / 2;

        // Check if target is present at mid
        if (arr[mid] == target)
            return mid;

        // If target is greater, ignore left half
        if (arr[mid] < target)
            left = mid + 1;
        // If target is smaller, ignore right half
        else
            right = mid - 1;
    }
    // Target not found
    return -1;
}

int main() {
    int arr[] = {1, 2, 3, 4, 5, 8, 10, 15, 20};
    int n = sizeof(arr) / sizeof(arr[0]);
    int target = 5;

    printf("=== Binary Search ===\n");
    printf("Array: ");
    for(int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\nSearching for element: %d\n", target);

    int result = binarySearchIterative(arr, 0, n - 1, target);

    if(result != -1)
        printf("Element found at index: %d\n", result);
    else
        printf("Element not found in the array\n");

    return 0;
}