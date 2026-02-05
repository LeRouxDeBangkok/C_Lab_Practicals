#include <stdio.h>

int main() {
    int size;
    printf("Enter size of grid: ");
    scanf("%d", &size);

    for (int i = 1; i <= size; i++) {
        int num = 0;
        for (int j = 0; j < size; j++){
            num += i;
            printf("%d", num);
            if (num / 10 < 1) {
                printf(" ");
            }
            printf(" ");
        }
        printf("\n");
    }

    return 0;
}