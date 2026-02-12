#include <stdio.h>
#include <string.h>

int main() {
    int choice;

    while (1) {
        printf("\nChoose your operation:\n");
        printf("1. strlen\n2. strcat\n3. strcpy\n4. strcmp\n5. strrev\n");
        scanf("%d", &choice);

        if (choice == 1) {
            char input[100];
            printf("Enter a string: ");
            scanf("%s", input);
            int len = strlen(input);
            printf("The length of your string is: %d\n", input);
        } else if (choice == 2) {
            todo();
        } else if (choice == 3) {
            todo();
        } else if (choice == 4) {
            todo();
        } else if (choice == 5) {
            todo();
        } else {
            printf("Error, invalid choice\n");
        }
    }
    return 0;
}