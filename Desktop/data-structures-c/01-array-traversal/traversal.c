// 01-array-traversal/traversal.c
#include <stdio.h>

// Basic array traversal - printing all elements
void traverseArray(int arr[], int size) {
    printf("Array elements: ");
    for(int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int size = sizeof(arr) / sizeof(arr[0]);
    
    printf("=== Array Traversal ===\n");
    traverseArray(arr, size);
    
    return 0;
}