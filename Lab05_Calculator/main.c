#include <stdio.h>

int main() {
    float res;
    int num1;
    int num2;
    char op;

    printf("Simple calculator, integers only!\n");
    printf("Enter your first number: ");
    scanf("%d", &num1);
    printf("Enter your second number: ");
    scanf("%d", &num2);
    printf("Choose what operation to perform\nType + - x or /: ");
    scanf(" %c", &op);

    if (op == '+') {
        res = num1 + num2;
    } else if (op == '-') {
        res = num1 - num2;
    } else if (op == 'x') {
        res = num1 * num2;
    } else if (op == '/') {
        res = (float)num1 / num2;
    } else {
        printf("Error, wrong operator");
        return 1;
    }

    printf("The result is %f\n", res);

    return 0;
}