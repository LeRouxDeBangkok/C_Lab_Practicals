#include <stdio.h>
#include <math.h>

int armstrong(int x) {
    int original, digit, n = 0;
    int sum = 0;
    int num = x;
    original = num;
    while (original != 0) {
        original /= 10;
        n++;
    }
    original = num;
    while (num != 0) {
        digit = num % 10;
        sum += round(pow(digit, n));
        num /= 10;
    }
    if (sum == original) {
        return 1;
    } else {
        return 0;
    }
}

int prime(int x) {
    if (x <= 1) {
        return 0;
    }
    for (int i = 2; i * i <= x; i++) {
        if (x % i == 0) {
            return 0;
        }
    }
    return 1;
}

int perfect(int x) {
    int sum = 0;
    for (int i = 1; i <= x / 2; i++) {
        if (x % i == 0) {
            sum = sum + i;
        }
    }
    if (sum == x && x != 0) {
        return 1;
    } else {
        return 0;
    }
}

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    if (armstrong(num)) {
        printf("%d is an Armstrong number\n", num);
    }
    if (prime(num)) {
        printf("%d is a prime number\n", num);
    }
    if (perfect(num)) {
        printf("%d is a perfect number\n", num);
    }

    return 0;
}