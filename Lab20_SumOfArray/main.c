#include <stdio.h>

int sumArray(int arr[]) {
    int res = 0;
    for (int i=0; i<5; i++) {
        res += arr[i];
    }
    return res;
}

int main() {
    int arr[5];
    printf("Enter 5 values for your array, seperated by a space: ");
    scanf("%d %d %d %d %d", &arr[0], &arr[1], &arr[2], &arr[3], &arr[4]);
    int res = sumArray(arr);
    printf("Sum = %d\n", res);

    return 0;
}