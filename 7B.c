// Experiment 7 - Task 2: Sum of two matrices
#include <stdio.h>

#define ROWS 3
#define COLS 3

int main() {
    int a[ROWS][COLS], b[ROWS][COLS], sum[ROWS][COLS];
    int i, j;

    printf("Enter elements of Matrix A (%d x %d), row by row:\n", ROWS, COLS);
    for (i = 0; i < ROWS; i++)
        for (j = 0; j < COLS; j++)
            scanf("%d", &a[i][j]);

    printf("Enter elements of Matrix B (%d x %d), row by row:\n", ROWS, COLS);
    for (i = 0; i < ROWS; i++)
        for (j = 0; j < COLS; j++)
            scanf("%d", &b[i][j]);

    // add the corresponding elements
    for (i = 0; i < ROWS; i++)
        for (j = 0; j < COLS; j++)
            sum[i][j] = a[i][j] + b[i][j];

    printf("\nSum of the two matrices:\n");
    for (i = 0; i < ROWS; i++) {
        for (j = 0; j < COLS; j++)
            printf("%5d", sum[i][j]);
        printf("\n");
    }
    return 0;
}