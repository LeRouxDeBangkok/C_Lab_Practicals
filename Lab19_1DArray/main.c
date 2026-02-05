#include <stdio.h>

int main() {
    int arr[100] = {1, 2, 3, 4, 5, 6};
    int choice;
    printf("Array is initialized with {1, 2, 3, 4, 5, 6}\n");
    printf("Choose your operation:\n");
    printf("1. Insert\n");
    printf("2. Update\n");
    printf("3. Delete\n");
    printf("4. Display\n");
    printf("5. Search\n");
    scanf("%d", &choice);

    if (choice == 1) {
        return 1;
    } else if (choice == 2) {
        return 1;
    } else if (choice == 3) {
        return 1;
    } else if (choice == 4) {
        int i = 0;
        while (arr[i]) {
            printf("%d ", arr[i]);
            i++;
        }
    } else if (choice == 5) {
        return 1;
    } else {
        printf("Error, invalid choice");
        return 1;
    }
    return 0;
}