// Experiment 10 - Task 2: Print the elements of an array in reverse order using pointers
#include <stdio.h>

int main() {
    int arr[50], n, i;
    int *ptr = arr;                         // ptr points to the first element

    printf("Enter number of elements (max 50): ");
    scanf("%d", &n);
    printf("Enter %d elements: ", n);
    for (i = 0; i < n; i++)
        scanf("%d", ptr + i);              // same as &arr[i]

    printf("\nArray in reverse order: ");
    for (i = n - 1; i >= 0; i--)
        printf("%d ", *(ptr + i));          // same as arr[i]
    printf("\n");
    return 0;
}