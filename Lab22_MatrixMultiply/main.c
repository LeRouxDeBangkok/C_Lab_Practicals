#include <stdio.h>

int main() {
    int mat1[2][2];
    int mat2[2][2];
    int mat3[2][2];
    printf("We will only multiply 2x2 matrices for simplicity\n");

    printf("Enter values of your first square matrix:\n");
    printf("[0][0] = ");
    scanf("%d", &mat1[0][0]);
    printf("[0][1] = ");
    scanf("%d", &mat1[0][1]);
    printf("[1][0] = ");
    scanf("%d", &mat1[1][0]);
    printf("[1][1] = ");
    scanf("%d", &mat1[1][1]);

    printf("Enter values of your second square matrix:\n");
    printf("[0][0] = ");
    scanf("%d", &mat2[0][0]);
    printf("[0][1] = ");
    scanf("%d", &mat2[0][1]);
    printf("[1][0] = ");
    scanf("%d", &mat2[1][0]);
    printf("[1][1] = ");
    scanf("%d", &mat2[1][1]);

    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            mat3[i][j] = 0;
            for (int k = 0; k < 2; k++) {
                mat3[i][j] += mat1[i][k] * mat2[k][j];
            }
        }
    }

    printf("%d %d\n%d %d\n", mat3[0][0], mat3[0][1], mat3[1][0], mat3[1][1]);

    return 0;
}