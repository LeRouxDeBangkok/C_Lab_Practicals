#include <stdio.h>

int main() {
    int layers, diff, rem;
    printf("Number of layers: ");
    scanf("%d", &layers);

    for (int i = 0; i < layers + 1; i++) {
        diff = layers - i;
        rem = layers - diff;
        for (int j = 0; j < diff; j++) {
            printf(" ");
        }
        for (int k = 0; k < rem; k++) {
            printf("*");
        }
        printf("\n");
    }

    for (int i2 = 0; i2 < layers + 1; i2++) {
        diff = layers - i2;
        rem = layers - diff;
        for (int k2 = 0; k2 < rem; k2++) {
            printf("*");
        }
        for (int j2 = 0; j2 < diff; j2++) {
            printf(" ");
        }
        printf("\n");
    }

    return 0;
}