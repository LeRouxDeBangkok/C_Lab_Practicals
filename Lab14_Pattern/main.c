#include <stdio.h>

int main() {
    int layers, diff, rem;
    printf("Number of layers: ");
    scanf("%d", layers);

    for (int i = 0; i < layers; i++) {
        diff = layers - i;
        rem = layers - diff;
        for (int j = 0; j < diff; j++) {
            printf(" ");
        }
        for (int k = 0; k < rem; k++) {
            printf("*");
        }
    }

    return 0;
}