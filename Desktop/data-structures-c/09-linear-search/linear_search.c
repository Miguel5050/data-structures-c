#include <stdio.h>

int main() {
    int arr[100], n, key, i;
    int found = 0;

    // Input number of elements
    printf("=== Linear Search ===\n");
    printf("Enter number of elements: ");
    scanf("%d", &n);

    // Input array elements

    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Input the value to search
    printf("Enter the element to search: ");
    scanf("%d", &key);

    // Linear Search Process
    printf("\nSearching...\n");
    for(i = 0; i < n; i++) {
        printf("Checking element at position %d: %d\n", i+1, arr[i]);
        if(arr[i] == key) {
            printf("\n✅ Element %d found at position %d (index %d).\n", key, i + 1, i);
            found = 1;
            break;
        }
    }

    // If element not found
    if(found == 0) {
        printf("\n❌ Element %d not found in the array.\n", key);
    }

    return 0;
}
