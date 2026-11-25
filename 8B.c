// Experiment 8 - Task 2: Check whether the entered string is a palindrome
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char str[100];
    int i, j, isPalindrome = 1;

    printf("Enter a string: ");
    scanf("%99s", str);

    i = 0;                                  // first character
    j = strlen(str) - 1;                    // last character
    while (i < j) {
        if (tolower(str[i]) != tolower(str[j])) {
            isPalindrome = 0;               // mismatch found
            break;
        }
        i++;
        j--;
    }

    if (isPalindrome)
        printf("\"%s\" is a PALINDROME.\n", str);
    else
        printf("\"%s\" is NOT a palindrome.\n", str);
    return 0;
}