#include <stdio.h>
#include <math.h>

int main() {
    int choice;
    printf("Choose an esquation from the list\n");
    printf("1. V = u + a * t\n");
    printf("2. S = u * t + 0.5 * a * (t * t)\n");
    printf("3. T = 2 * a + sqrt(b + 9c)\n");
    printf("4. H = sqrt((b * b) + (p * p))\n");
    printf("Choose the number of one of the equation (1-4): ");
    scanf("%d", choice);

    if (choice == 1) {
        int u, a, t, res;
        printf("Enter value of u: ");
        scanf("%d", u);
        printf("Enter value of a: ");
        scanf("%d", a);
        printf("Enter value of t: ");
        scanf("%d", t);
        res = u + (a*t);
        printf("V = %d", res);
    } else if (choice == 2) {
        int u, a, t;
        float res;
        printf("Enter value of u: ");
        scanf("%d", u);
        printf("Enter value of a: ");
        scanf("%d", a);
        printf("Enter value of t: ");
        scanf("%d", t);
        res = (u*t) + (0.5*a*(t*t));
        printf("V = %f", res);
    } else if (choice == 3) {
        todo();
    } else if (choice == 4) {
        todo();
    } else {
        printf("Error, invalid number in choice");
    }

    return 0;
}