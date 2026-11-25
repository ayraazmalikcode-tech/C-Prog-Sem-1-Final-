// Experiment 5: Fibonacci series for N terms - iterative and recursive methods
#include <stdio.h>

// Iterative method: prints N terms using a loop
void fibIterative(int n) {
    int a = 0, b = 1, next, i;
    for (i = 1; i <= n; i++) {
        printf("%d ", a);
        next = a + b;
        a = b;
        b = next;
    }
    printf("\n");
}

// Recursive method: returns the n-th term (term 0 = 0, term 1 = 1)
int fibRecursive(int n) {
    if (n == 0)
        return 0;                         // base case 1
    if (n == 1)
        return 1;                         // base case 2
    return fibRecursive(n - 1) + fibRecursive(n - 2);
}

int main() {
    int n, i;

    printf("Enter number of terms (N): ");
    scanf("%d", &n);

    printf("\nIterative : ");
    fibIterative(n);

    printf("Recursive : ");
    for (i = 0; i < n; i++)
        printf("%d ", fibRecursive(i));
    printf("\n");
    return 0;
}