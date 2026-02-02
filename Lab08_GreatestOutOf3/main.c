#include <stdio.h>

int main() {
    int a, b, c, choice;
    printf("Choose value of a: ");
    scanf("%d", &a);
    printf("Choose value of b: ");
    scanf("%d", &b);
    printf("Choose value of c: ");
    scanf("%d", &c);
    printf("Choose comparison methode (1 = Conditional Operators, 2 = If/Else Statements): ");
    scanf("%d", &choice);

    if (choice == 1) {
        while(a>b || b>c) {
            if (a > b) {
                int temp = a;
                a = b;
                b = temp;
            }
            if (b > c) {
                int temp = b;
                b = c;
                c = temp;
            }
        }
        printf("%d < %d < %d", a, b, c);
    } else if (choice == 2) {
        return 1;
    } else {
        printf("Error, wrong choice");
        return 1;
    }

    return 0;
}