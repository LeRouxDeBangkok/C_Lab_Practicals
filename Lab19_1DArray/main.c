#include <stdio.h>
#include <stdlib.h>

int main() {
    int arr[100] = {1, 2, 3, 4, 5, 6};
    int size = 6;
    int choice, pos, val, i, found;

    while (1) {
        printf("\nArray: ");
        for (i = 0; i < size; i++) {
            printf("%d ", arr[i]);
        }
        printf("\nChoose your operation:\n");
        printf("1. Insert\n2. Update\n3. Delete\n4. Display\n5. Search\n");
        scanf("%d", &choice);

        if (choice == 1) {
            printf("Enter position (0 to %d) and value: ", size);
            scanf("%d %d", &pos, &val);
            if (pos >= 0 && pos <= size && size < 100) {
                for (i = size; i > pos; i--) {
                    arr[i] = arr[i - 1];
                }
                arr[pos] = val;
                size++;
            } else {
                printf("Invalid position!\n");
            }
        } else if (choice == 2) {
            printf("Enter index (0 to %d) and new value: ", size - 1);
            scanf("%d %d", &pos, &val);
            if (pos >= 0 && pos < size) {
                arr[pos] = val;
            } else {
                printf("Invalid index!\n");
            }
        } else if (choice == 3) {
            printf("Enter index to delete (0 to %d): ", size - 1);
            scanf("%d", &pos);
            if (pos >= 0 && pos < size) {
                for (i = pos; i < size - 1; i++) {
                    arr[i] = arr[i + 1];
                }
                size--;
            } else {
                printf("Invalid index!\n");
            }
        } else if (choice == 4) {
            for (i = 0; i < size; i++) {
                printf("%d ", arr[i]);
            }
            printf("\n");
        } else if (choice == 5) {
            printf("Enter value to search: ");
            scanf("%d", &val);
            found = -1;
            for (i = 0; i < size; i++) {
                if (arr[i] == val) {
                    found = i;
                    break;
                }
            }
            if (found != -1) printf("Element found at index %d\n", found);
            else printf("Element not found\n");
        } else {
            printf("Error, invalid choice\n");
        }
    }
    return 0;
}