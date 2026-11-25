// Experiment 8 - Task 1: Length of a string without using a library function
#include <stdio.h>

int main() {
    char str[100];
    int length = 0;

    printf("Enter a string: ");
    scanf("%99[^\n]", str);             // reads a whole line including spaces

    while (str[length] != '\0')          // count characters until the null character
        length++;

    printf("Length of the string = %d\n", length);
    return 0;
}