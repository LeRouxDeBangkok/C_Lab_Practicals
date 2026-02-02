#include <stdio.h>

int main() {
    int a, b, choice;
    printf("Pick value for a: ");
    scanf("%d", &a);
    printf("Pick value for b: ");
    scanf("%d", &b);
    printf("Pick Swap method (1 = with temp value, 2 = without): ");
    scanf("%d", &choice);

    if (choice == 1) {
        printf("Before Swap:\n");
        printf("a = %d\n", a);
        printf("b = %d\n", b);
        int temp = a;
        a = b;
        b = temp;
        printf("After Swap:\n");
        printf("a = %d\n", a);
        printf("b = %d\n", b);
    } else if (choice == 2) {
        printf("Before Swap:\n");
        printf("a = %d\n", a);
        printf("b = %d\n", b);
        a = a + b;
        b = a - b;
        a = a - b;
        printf("After Swap:\n");
        printf("a = %d\n", a);
        printf("b = %d\n", b);
    } else {
        printf("Error, invalide choice");
        return 1;
    }
    return 0;
}