// 08-array-update/update_elements.c
#include <stdio.h>

int main() {
    int arr[5] = {10, 20, 30, 40, 50};
    int i;

    printf("=== Array Update (Add 5 to each element) ===\n");
    
    printf("Array before updating: ");
    for(i = 0; i < 5; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    // Traverse and update each element
    for(i = 0; i < 5; i++) {
        arr[i] = arr[i] + 5;
    }

    printf("Array after updating: ");
    for(i = 0; i < 5; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}