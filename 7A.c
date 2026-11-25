// Experiment 7 - Task 1: Largest (and second largest) element of an array
#include <stdio.h>
#include <limits.h>

int main() {
    int arr[50], n, i;
    int largest = INT_MIN, second = INT_MIN;

    printf("Enter number of elements (max 50): ");
    scanf("%d", &n);
    printf("Enter %d elements: ", n);
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    for (i = 0; i < n; i++) {
        if (arr[i] > largest) {            // new largest found
            second = largest;
            largest = arr[i];
        } else if (arr[i] > second && arr[i] != largest) {
            second = arr[i];               // new second largest found
        }
    }

    printf("\nLargest element          = %d\n", largest);
    if (second == INT_MIN)
        printf("Second largest element = not available\n");
    else
        printf("Second largest element = %d\n", second);
    return 0;
}