// 06-deletion-end/delete_end.c
#include <stdio.h>

int main() {
    int arr[100] = {10, 20, 30, 40, 50};
    int size = 5;

    printf("=== Deletion at End ===\n");
    printf("Array before deletion: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    // Delete element at the end
    if (size > 0) {
        size--;  // Simply reduce the size by 1
        printf("Element deleted successfully!\n");
    } else {
        printf("Array is already empty!\n");
    }

    printf("Array after deletion: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    printf("New size: %d\n", size);

    return 0;
}