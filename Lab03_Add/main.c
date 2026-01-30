#include <stdio.h>

int main() {
    int num1;
    int num2;
    int res;
    printf("Enter first number: ");
    scanf("%d", &num1);
    printf("Enter second number: ");
    scanf("%d", &num2);
    res = num1 + num2;
    printf("%d + %d = %d\n", num1, num2, res);
}