#include <stdio.h>

#include <stdio.h>

int main() {
    int n = 5;
    int sum_for = 0, sum_while = 0, sum_do = 0;
    int i;

    for (i = 1; i <= n; i++) {
        sum_for += i;
    }
    printf("Sum using for loop: %d\n", sum_for);

    i = 1;
    while (i <= n) {
        sum_while += i;
        i++;
    }
    printf("Sum using while loop: %d\n", sum_while);

    i = 1;
    do {
        sum_do += i;
        i++;
    } while (i <= n);
    printf("Sum using do-while loop: %d\n", sum_do);

    return 0;
}