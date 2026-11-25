// Experiment 10 - Task 1: Add two numbers using pointers
#include <stdio.h>

int main() {
    int a, b, sum;

    int *p1 = &a, *p2 = &b;                 // p1 points to a, p2 points to b
    printf("Enter first number : ");
    scanf("%d", p1);                       // same as scanf("%d", &a)
    printf("Enter second number : ");
    scanf("%d", p2);

    sum = *p1 + *p2;                        // *p1 and *p2 give the values of a and b
    printf("\nValue pointed by p1 = %d\n", *p1);
    printf("Value pointed by p2 = %d\n", *p2);
    printf("Sum = %d + %d = %d\n", *p1, *p2, sum);
    return 0;
}