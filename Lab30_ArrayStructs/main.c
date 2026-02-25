#include <stdio.h>

struct Employee {
    int id;
    char name[50];
    float salary;
};

int main() {
    struct Employee emp[5];

    for (int i = 0; i < 5; i++) {
        printf("Enter employee #%d ID: ", i+1);
        scanf("%d", &emp[i].id);
        printf("Enter employee's name: ");
        scanf("%s", emp[i].name);
        printf("Enter employee's salary (can be a float): ");
        scanf("%f", &emp[i].salary);
    }
    printf("\nEMPLOYEE INFORMATION\n");
    for (int j = 0; j < 5; j++) {
        printf("Employee ID: %d, %s, current salary: %.2f\n", emp[j].id, emp[j].name, emp[j].salary);
    }
    return 0;
}