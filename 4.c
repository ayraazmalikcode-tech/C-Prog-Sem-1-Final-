// Experiment 4: Find all prime numbers between two numbers using functions
#include <stdio.h>

// returns 1 if n is prime, otherwise returns 0
int isPrime(int n) {
    int i;
    if (n < 2)
        return 0;
    for (i = 2; i * i <= n; i++) {       // check divisors only up to sqrt(n)
        if (n % i == 0)
            return 0;
    }
    return 1;
}

// prints all prime numbers from low to high (both inclusive)
void printPrimes(int low, int high) {
    int n, count = 0;
    for (n = low; n <= high; n++) {
        if (isPrime(n)) {
            printf("%d ", n);
            count++;
        }
    }
    printf("\nTotal prime numbers found = %d\n", count);
}

int main() {
    int a, b, temp;

    printf("Enter the lower number : ");
    scanf("%d", &a);
    printf("Enter the upper number : ");
    scanf("%d", &b);

    if (a > b) {                         // handle numbers entered in reverse order
        temp = a;
        a = b;
        b = temp;
    }

    printf("\nPrime numbers between %d and %d are:\n", a, b);
    printPrimes(a, b);
    return 0;
}