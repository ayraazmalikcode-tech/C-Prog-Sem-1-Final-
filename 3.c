// Experiment 3: Menu-driven Student Grade and Result Management System
// switch is used for the menu choices, goto is used to repeat the menu and to exit
#include <stdio.h>

int main() {
    char name[30], grade;
    int marks[3], i, choice, total, passed, entered = 0;
    float percentage;

menu:
    printf("\n===== STUDENT GRADE & RESULT MANAGEMENT =====\n"); // goto label: show the menu again
    printf("1. Enter student details and marks\n");
    printf("2. Display marks\n");
    printf("3. Calculate total and percentage\n");
    printf("4. Show grade and result\n");
    printf("5. Exit\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    if (choice >= 2 && choice <= 4 && !entered)
        goto nodata;                 // marks must be entered first

    switch (choice) {
        case 1:
            printf("Enter student name (no spaces): ");
            scanf("%s", name);
            for (i = 0; i < 3; i++) {
                printf("Enter marks in subject %d (0-100): ", i + 1);
                scanf("%d", &marks[i]);
            }
            entered = 1;
            printf("Record saved.\n");
            break;
        case 2:
            printf("\nStudent: %s\n", name);
            for (i = 0; i < 3; i++)
                printf("Subject %d marks: %d\n", i + 1, marks[i]);
            break;
        case 3:
            total = marks[0] + marks[1] + marks[2];
            percentage = total / 3.0;
            printf("\nTotal = %d/300, Percentage = %.2f%%\n", total, percentage);
            break;
        case 4:
            total = marks[0] + marks[1] + marks[2];
            percentage = total / 3.0;
            passed = (marks[0] >= 40 && marks[1] >= 40 && marks[2] >= 40);
            if (!passed)
                grade = 'F';
            else if (percentage >= 75)
                grade = 'A';
            else if (percentage >= 60)
                grade = 'B';
            else if (percentage >= 50)
                grade = 'C';
            else
                grade = 'D';
            printf("\nGrade : %c\n", grade);
            printf("Result : %s\n", passed ? "PASS" : "FAIL");
            break;
        case 5:
            goto quit;                 // leave the program
        default:
            printf("Invalid choice! Please enter 1 to 5.\n");
    }
    goto menu;                         // repeat the menu

nodata:
    printf("\nNo record found! Please choose option 1 first.\n");
    goto menu;

quit:
    printf("\nThank you for using the system. Goodbye!\n");
    return 0;
}