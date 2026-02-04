#include <stdio.h>
#include <math.h>

int main() {
    int num, original, digit;
    int sum = 0;
    printf("Enter the number: ");
    scanf("%d", &num);

    original = num;

    while (num != 0) {
        digit = num % 10;
        sum = sum + digit*digit*digit;
        num = num / 10;
    }

    if (sum == original) {
        printf("Armstrong Number\n");
    } else {
        printf("Not an Armstrong Number\n");
    }

    return 0;
}