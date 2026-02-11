#include <stdio.h>

int main() {
    int mat1[3][3];
    int mat2[3][3];
    printf("Write the value of your 3x3 Matrix:\n");
    
    printf("[0][0] = ");
    scanf("%d", &mat1[0][0]);
    printf("[0][1] = ");
    scanf("%d", &mat1[0][1]);
    printf("[0][2] = ");
    scanf("%d", &mat1[0][2]);
    printf("[1][0] = ");
    scanf("%d", &mat1[1][0]);
    printf("[1][1] = ");
    scanf("%d", &mat1[1][1]);
    printf("[1][2] = ");
    scanf("%d", &mat1[1][2]);
    printf("[2][0] = ");
    scanf("%d", &mat1[2][0]);
    printf("[2][1] = ");
    scanf("%d", &mat1[2][1]);
    printf("[2][2] = ");
    scanf("%d", &mat1[2][2]);

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            mat2[j][i] = mat1[i][j];
        }
    }

    printf("\nInput Matrix:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d ", mat1[i][j]);
        }
        printf("\n");
    }

    printf("Transposed Matrix:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d ", mat2[i][j]);
        }
        printf("\n");
    }

    return 0;
}