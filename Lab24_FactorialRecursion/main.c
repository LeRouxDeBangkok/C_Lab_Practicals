#include <stdio.h>

int recursion(int num) {
    if (num > 1) {
        num *= recursion(num-1);
    }
    return num;
}

int main() {
    int num;
    printf("Enter your number: ");
    scanf("%d", &num);

    int res = recursion(num);

    printf("Factorial = %d\n", res);

    return 0;
}