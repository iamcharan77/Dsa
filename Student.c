#include <stdio.h>

int main() {
    int total, n, i;
    char names[100][50];
    printf("Enter total number of students: ");
    scanf("%d", &total);
    printf("\nEnter the names of %d students:\n", total);
    for (i = 0; i < total; i++) {
        printf("Student %d: ", i + 1);
        scanf("%s", names[i]);
    }
    printf("\nHow many first names do you want to display? ");
    scanf("%d", &n);
    printf("\nFirst %d student names:\n", n);
    for (i = 0; i < n && i < total; i++) {
        printf("%d. %s\n", i + 1, names[i]);
    }

    return 0;
}
