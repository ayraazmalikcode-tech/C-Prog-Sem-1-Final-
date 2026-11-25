// Experiment 11: Simple employee database using file handling
#include <stdio.h>

#define FILE_NAME "employee.txt"

struct employee {
    int id;
    char name[30];
    float salary;
};

// append a new employee record to the file
void addEmployee(void) {
    struct employee e;
    FILE *fp = fopen(FILE_NAME, "a");       // "a" = append mode
    if (fp == NULL) {
        printf("Error: cannot open file!\n");
        return;
    }
    printf("Enter employee ID     : ");
    scanf("%d", &e.id);
    printf("Enter employee name   : ");
    scanf("%s", e.name);
    printf("Enter employee salary : ");
    scanf("%f", &e.salary);
    fprintf(fp, "%d %s %.2f\n", e.id, e.name, e.salary);
    fclose(fp);
    printf("Record saved successfully.\n");
}

// read the file and display all records
void displayEmployees(void) {
    struct employee e;
    FILE *fp = fopen(FILE_NAME, "r");       // "r" = read mode
    if (fp == NULL) {
        printf("No records found.\n");
        return;
    }
    printf("\n%-6s %-12s %10s\n", "ID", "Name", "Salary");
    printf("--------------------------------\n");
    while (fscanf(fp, "%d %s %f", &e.id, e.name, &e.salary) == 3)
        printf("%-6d %-12s %10.2f\n", e.id, e.name, e.salary);
    fclose(fp);
}

// search a record by employee ID
void searchEmployee(void) {
    struct employee e;
    int id, found = 0;
    FILE *fp = fopen(FILE_NAME, "r");
    if (fp == NULL) {
        printf("No records found.\n");
        return;
    }
    printf("Enter employee ID to search: ");
    scanf("%d", &id);
    while (fscanf(fp, "%d %s %f", &e.id, e.name, &e.salary) == 3) {
        if (e.id == id) {
            printf("Found -> ID: %d, Name: %s, Salary: %.2f\n", e.id, e.name, e.salary);
            found = 1;
            break;
        }
    }
    if (!found)
        printf("Employee with ID %d not found.\n", id);
    fclose(fp);
}

int main() {
    int choice;

    do {
        printf("\n--- EMPLOYEE DATABASE ---\n");
        printf("1. Add employee\n");
        printf("2. Display all employees\n");
        printf("3. Search employee by ID\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1: addEmployee(); break;
            case 2: displayEmployees(); break;
            case 3: searchEmployee(); break;
            case 4: printf("Exiting program...\n"); break;
            default: printf("Invalid choice!\n");
        }
    } while (choice != 4);

    return 0;
}