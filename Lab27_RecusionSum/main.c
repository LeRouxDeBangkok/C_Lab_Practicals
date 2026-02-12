#include <stdio.h>

int recursiveCount(int x) {
    if (x == 0) {
        return 0;
    }
    return (x % 10) + recursiveCount(x / 10);
}

int main() {
    int input = 0;
    int res = 0;
    printf("Enter your int: ");
    scanf("%d", &input);
    res = recursiveCount(input);
    printf("Sum of digits after recursive count: %d\n", res);

    return 0;
}