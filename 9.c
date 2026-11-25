// Experiment 9: Structure student_record - read 5 students and display the topper
#include <stdio.h>

#define N 5                              // number of students

struct student_record {
    char name[30];
    int roll_number;
    float total_marks;
};

int main() {
    struct student_record s[N];
    int i, topper = 0;

    // read the data of 5 students
    for (i = 0; i < N; i++) {
        printf("\nEnter details of student %d\n", i + 1);
        printf("Name          : ");
        scanf("%s", s[i].name);
        printf("Roll number   : ");
        scanf("%d", &s[i].roll_number);
        printf("Total marks   : ");
        scanf("%f", &s[i].total_marks);

        if (s[i].total_marks > s[topper].total_marks)
            topper = i;                    // remember the index of the highest marks
    }

    // display all the records
    printf("\n%-6s %-12s %s\n", "Roll", "Name", "Total Marks");
    printf("--------------------------------------\n");
    for (i = 0; i < N; i++)
        printf("%-6d %-12s %.2f\n", s[i].roll_number, s[i].name, s[i].total_marks);

    // display the topper
    printf("\n*** TOPPER ***\n");
    printf("Name        : %s\n", s[topper].name);
    printf("Roll number : %d\n", s[topper].roll_number);
    printf("Total marks : %.2f\n", s[topper].total_marks);
    return 0;
}