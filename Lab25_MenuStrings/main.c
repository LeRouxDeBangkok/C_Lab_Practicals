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
            scanf("%s[^\n]", input);
            int len = strlen(input);
            printf("The length of your string is: %d\n", len);

        } else if (choice == 2) {
            char input1[100];
            char input2[100];
            printf("Enter your first string: ");
            scanf("%s[^\n]", input1);
            printf("Enter your second string: ");
            scanf("%s[^\n]", input2);
            strcat(input1, input2);
            printf("Printing your first string after strcat:\n");
            printf("%s", input1);

        } else if (choice == 3) {
            char input[100];
            char copy[100];
            printf("Enter a string: ");
            scanf("%s[^\n]", input);
            strcat(copy, input);
            printf("Here is the copy of your string stored in another variable:\n");
            printf("%s", copy);

        } else if (choice == 4) {
            int res = 0;
            char input1[100];
            char input2[100];
            printf("Enter your first string: ");
            scanf("%s[^\n]", input1);
            printf("Enter your second string: ");
            scanf("%s[^\n]", input2);
            res = strcmp(input1, input2);
            if (res == 0) {
                printf("Both strings are equal\n");
            } else if (res > 0) {
                printf("String1 > String2\n");
            } else {
                printf("String2 > String1\n");
            }

        } else if (choice == 5) {
            char input[100];
            printf("Enter your string: ");
            scanf("%s[^\n]", input);
            /*
            strrev(input);
            printf("After strrev: %s", input);

            The code above does not work, reason:
            Using GCC to compile, even with the string.h library, strrev is
            not in the GCC compiler, so this does not compile if using GCC.
            I've provided my own implmentation of strrev below as a replacement
            */

            int i = 0;
            int j = strlen(input) - 1;
            while (i < j) {
                char temp = input[i];
                input[i] = input[j];
                input[j] = temp;
                i++;
                j--;
            }
            printf("After strrev: %s\n", input);

        } else {
            printf("Error, invalid choice\n");
            return 1;
        }
    }
    return 0;
}