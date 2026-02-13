// 05-deletion-beginning/delete_beginning.c
#include <stdio.h>

int main() {
    int cube[5] = {30, 40, 47, 12, 32};
    int n = 5;
    
    printf("=== Deletion at Beginning ===\n");
    
    // Displays initial array
    printf("Initial elements of array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", cube[i]);
    }
    printf("\n");
    
    // Delete the first element of the array
    for(int i = 0; i < n - 1; i++) {
        cube[i] = cube[i + 1];
    }
    n--; // reduce length of the array
    
    // Displays the new array
    printf("Elements after deleting first element: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", cube[i]);
    }
    printf("\n");
    printf("New size: %d\n", n);

    return 0;
}