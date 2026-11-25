// Experiment 2 - Task 2: Sum of all odd numbers between two numbers (inclusive)
#include <stdio.h>

int main() {
    int start, end, i, temp, sum = 0;

    printf("Enter the first number  : ");
    scanf("%d", &start);
    printf("Enter the second number : ");
    scanf("%d", &end);

    if (start > end) {                 // works even if numbers are entered in reverse
        temp = start;
        start = end;
        end = temp;
    }

    printf("Odd numbers from %d to %d: ", start, end);
    for (i = start; i <= end; i++) {
        if (i % 2 != 0) {              // i is odd
            printf("%d ", i);
            sum = sum + i;
        }
    }
    printf("\nSum of odd numbers = %d\n", sum);
    return 0;
}