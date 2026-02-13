// 02-insertion-beginning/insert_beginning.c
#include <stdio.h>

int main() {
    int arr[100];  // Declare an array of size 100
    int n = 5;     // Initial number of elements
    int i;         // Loop variable
    int element;   // Element to insert
    
    // Initialize the array with sample elements
    arr[0] = 10;
    arr[1] = 20;
    arr[2] = 30;
    arr[3] = 40;
    arr[4] = 50;
    
    printf("=== Insertion at Beginning ===\n");
    printf("Original array: ");
    for(i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    
    // Input the element to insert
    printf("Enter the element to insert at the beginning: ");
    scanf("%d", &element);
    
    // Shift elements to the right
    for (i = n - 1; i >= 0; i--) {
        arr[i + 1] = arr[i];
    }
    
    // Insert at beginning
    arr[0] = element;
    
    // Update number of elements
    n++;
    
    // Print the updated array
    printf("Array after insertion: ");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    
    return 0;
}