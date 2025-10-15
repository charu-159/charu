//employee 
#include <stdio.h>

struct employee {
    char name[20];
    int id;
    int salary;
};

int main() {
    struct employee s1[1];

    for (int i = 0; i < 1; i++) {
        printf("Enter your name: ");
        scanf(" %s", s1[i].name);  

        printf("Enter ID: ");
        scanf("%d", &s1[i].id);

        printf("Enter salary: ");
        scanf("%d", &s1[i].salary);
    }

    for (int i = 0; i < 1; i++) {
        printf("\nEmployee Info:\n");
        printf("Name: %s\n", s1[i].name);
        printf("ID: %d\n", s1[i].id);
        printf("Salary: %d\n", s1[i].salary);
    }

    return 0;
}
