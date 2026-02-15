// 10-binary-search-advanced/binary_search_advanced.c
#include <stdio.h>

// Function to display array
void displayArray(int arr[], int size) {
    for(int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

// Iterative binary search
int binarySearch(int arr[], int left, int right, int target) {
    while (left <= right) {
        int mid = left + (right - left) / 2;
        
        printf("Checking middle element at index %d: %d\n", mid, arr[mid]);

        if (arr[mid] == target) {
            return mid;
        }

        if (arr[mid] < target) {
            printf("Target is greater, searching right half...\n");
            left = mid + 1;
        } else {
            printf("Target is smaller, searching left half...\n");
            right = mid - 1;
        }
    }
    return -1;
}

int main() {
    int arr[100];
    int n, target;
    
    printf("=== Binary Search with Step-by-Step Tracing ===\n");
    
    // Get array size from user
    printf("Enter number of elements in sorted array: ");
    scanf("%d", &n);
    
    // Get array elements (must be sorted)
    printf("Enter %d sorted elements:\n", n);
    for(int i = 0; i < n; i++) {
        printf("Element %d: ", i+1);
        scanf("%d", &arr[i]);
    }
    
    // Display the array
    printf("\nArray: ");
    displayArray(arr, n);
    
    // Get target to search
    printf("Enter element to search: ");
    scanf("%d", &target);
    
    printf("\nStarting binary search...\n");
    int result = binarySearch(arr, 0, n - 1, target);

    if(result != -1)
        printf("\n✓ Element %d found at index %d\n", target, result);
    else
        printf("\n✗ Element %d not found in the array\n", target);

    return 0;
}