#include <stdio.h>

struct Employee {
    int id;
    char name[50];
    float salary;
};

int main() {
    int n, i;
    struct Employee emp[50];
    float tax, net_salary;
    printf("Enter number of employees: ");
    scanf("%d", &n);
    for (i = 0; i < n; i++) {
        printf("\nEnter details for employee %d:\n", i + 1);

        printf("Enter ID: ");
        scanf("%d", &emp[i].id);

        printf("Enter Name: ");
        scanf("%s", emp[i].name);

        printf("Enter Salary: ");
        scanf("%f", &emp[i].salary);
    }
    printf("\n--- Employee Details ---\n");
    for (i = 0; i < n; i++) {
        tax = emp[i].salary * 0.10;
        net_salary = emp[i].salary - tax;

        printf("\nEmployee %d:\n", i + 1);
        printf("ID: %d\n", emp[i].id);
        printf("Name: %s\n", emp[i].name);
        printf("Salary: %.2f\n", emp[i].salary);
        printf("Income Tax (10%%): %.2f\n", tax);
        printf("Net Salary: %.2f\n", net_salary);
    }

    return 0;
}
