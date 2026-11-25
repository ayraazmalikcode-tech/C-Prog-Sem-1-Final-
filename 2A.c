// Experiment 2 - Task 1: Check whether the entered number is even or odd
#include <stdio.h>

int main() {
    int num;

    printf("Enter an integer: ");
    scanf("%d", &num);

    if (num % 2 == 0)                 // remainder 0 means the number is even
        printf("%d is an EVEN number.\n", num);
    else
        printf("%d is an ODD number.\n", num);

    return 0;
}