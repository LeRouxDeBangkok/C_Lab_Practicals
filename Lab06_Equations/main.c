#include <stdio.h>
#include <math.h>

int main() {
    int choice;
    printf("Choose which equation you wish to evaluate:\n");
    printf("1. V = u + a*t\n");
    printf("2. S = u*t + 1/2*a*t^2\n");
    printf("3. T=2*a + sqrt(b) + 9*c\n");
    printf("4. H = sqrt(b^2 + p^2)\n");
    printf("Choose a number from 1-4: ");
    scanf("%d", &choice);

    if (choice == 1) {
        int u, a, t, res;
        printf("Enter values for u, a and t\n");
        printf("u = ");
        scanf("%d", &u);
        printf("a = ");
        scanf("%d", &a);
        printf("t = ");
        scanf("%d", &t);
        res = u + (a * t);
        printf("V = %d\n", res);
    } else if (choice == 2) {
        int u, a, t;
        float res;
        printf("Enter values for u, a and t\n");
        printf("u = ");
        scanf("%d", &u);
        printf("a = ");
        scanf("%d", &a);
        printf("t = ");
        scanf("%d", &t);
        res = (float)((u*t) + ((0.5)*a*(t*t)));
        printf("S = %f\n", res);
    } else if (choice == 3) {
        int a, b, c;
        float res;
        printf("Enter values for a, b and c\n");
        printf("a = ");
        scanf("%d", &a);
        printf("b = ");
        scanf("%d", &b);
        printf("c = ");
        scanf("%d", &c);
        res = (float)((2*a) + sqrt(b) + (9*c));
        printf("T = %f\n", res);
    } else if (choice == 4) {
        int b, p;
        float res;
        printf("Enter values for b, and p\n");
        printf("b = ");
        scanf("%d", &b);
        printf("p = ");
        scanf("%d", &p);
        res = sqrt(((b*b) + (p*p)));
        printf("H = %f\n", res);
    } else {
        printf("Error, input doesn't correspond to any operation!");
        return 1;
    }

    return 0;
}