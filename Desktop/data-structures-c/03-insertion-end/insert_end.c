// 03-insertion-end/insert_end.c
#include <stdio.h>

int main() {
    int arr[100] = {10, 20, 30, 40, 50};  
    int n = 5;  
    int value, i;

    printf("=== Insertion at End ===\n");
    printf("Original Array: ");
    for(i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    printf("\nEnter a new element to insert at the end: ");
    scanf("%d", &value);

    arr[n] = value;  
    n++;             

    printf("Updated Array: ");
    for(i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}