// Experiment 1 - Task 2: Average of PCM marks and admission eligibility
#include <stdio.h>

int main() {
    float physics, chemistry, maths, average;    // PCM marks and their average

    printf("Enter marks in Physics   (out of 100): ");
    scanf("%f", &physics);
    printf("Enter marks in Chemistry (out of 100): ");
    scanf("%f", &chemistry);
    printf("Enter marks in Maths     (out of 100): ");
    scanf("%f", &maths);

    average = (physics + chemistry + maths) / 3;    // average of PCM
    printf("\nAverage PCM marks = %.2f%%\n", average);

    // conditional (ternary) operator checks the 50% eligibility criteria
    printf("Status : %s\n",
           (average >= 50) ? "ELIGIBLE for admission" : "NOT ELIGIBLE for admission");
    return 0;
}