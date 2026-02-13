// 04-insertion-position/insert_position.c
#include <stdio.h>

int main()
{
    int arr[10] = {10, 20, 30, 40, 50};
    int n = 5;
    int position = 2;
    int newValue = 99;

    printf("=== Insertion at Specific Position ===\n");
    printf("Before: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    // Shift elements to the right to create space for the new value
    for (int i = n - 1; i >= position; i--)
    {
        arr[i + 1] = arr[i];
    }

    arr[position] = newValue;
    n = n + 1;

    printf("After inserting %d at position %d: ", newValue, position);
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}