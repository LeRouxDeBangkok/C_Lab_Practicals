#include <stdio.h>

void swapByValue(int x, int y) {
    int temp = x;
    x = y;
    y = temp;
    printf("Call by Value: a=%d, b=%d\n", x, y);
}

void swapByReference(int *x, int *y) {
    int temp = *x;
    *x = *y;
    *y = temp;
    printf("Call by Reference: a=%d, b=%d\n", *x, *y);
}

int main() {
    int a, b, choice;
    printf("Enter value of a: ");
    scanf("%d", &a);
    printf("Enter value of b: ");
    scanf("%d", &b);
    printf("Choose swap method:\n");
    printf("1. Call by value\n");
    printf("2. Call by reference\n");
    scanf("%d", &choice);

    if (choice == 1) {
        printf("\nBefore Call by Value -> a: %d, b: %d\n", a, b);
        swapByValue(a, b);
        printf("After Call by Value  -> a: %d, b: %d\n", a, b);
    } else if (choice == 2) {
        printf("\nBefore Call by Reference -> a: %d, b: %d\n", a, b);
        swapByReference(&a, &b);
        printf("After Call by Reference  -> a: %d, b: %d\n", a, b);
    } else {
        printf("Error invalid choice\n");
        return 1;
    }

    return 0;
}