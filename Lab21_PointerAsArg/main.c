#include <stdio.h>
#include <stdlib.h>

void swap(int *x, int *y) {
    int temp = *x;
    *x = *y;
    *y = temp;
}

int main() {
    int x, y;
    printf("To demonstrate passing pointers as arguments, we will use a swap function\n");
    printf("Enter values of x and y, sperated by a space: ");
    scanf("%d %d", &x, &y);
    swap(&x, &y);
    printf("After swap:\nx = %d\ny = %d\n", x, y);

    return 0;
}