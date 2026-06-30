#include <stdio.h>

struct Employee {
    int id;
    char name[50];
    char dept[20];
};

int main() {
    struct Employee e;
    printf("Enter ID, Name, Dept: ");
    scanf("%d %s %s", &e.id, e.name, e.dept);
    printf("\n--- Employee Data ---\nID: %d\nName: %s\nDept: %s\n", e.id, e.name, e.dept);
    return 0;
}