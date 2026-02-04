#include <stdio.h>

int main() {
    int num, count, sum;
    printf("Enter a positive integer: ");
    scanf("%d", &num);

    if (num < 0) {
        printf("Error: Please enter a positive integer.\n");
        return 1;
    }

    count = 1;
    sum = 0;
    while (count <= num) {
        sum += count;
        count++;
    }
    printf("Sum of first %d natural numbers is: %d\n", num, sum);

    return 0;
}