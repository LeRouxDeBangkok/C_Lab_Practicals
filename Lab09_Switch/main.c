#include <stdio.h>

int main() {
    char input[100];
    long num = 0;
    int i = 0;
    int isNegative = 0;

    printf("Enter letter or number: ");
    scanf("%s", input);

    if ((input[0] >= '0' && input[0] <= '9') || input[0] == '-') {
        if (input[0] == '-') {
            isNegative = 1;
            i = 1;
        }

        for (;input[i] != '\0'; i++) {
            if (input[i] >= '0' && input[i] <= '9') {
                num = num * 10 + (input[i] - '0');
            }
        }

        if (isNegative) {
            num = -num;
        }

        switch (num > 0) {
            case 1:
                printf("Input is a positive number\n");
                break;
            case 0:
                switch (num < 0) {
                    case 1:
                        printf("Input is a negative number\n");
                        break;
                    case 0:
                        printf("Input is zero\n");
                        break;
                }
                break;
        }
    } else if ((input[0] >= 'a' && input[0] <= 'z') || (input[0] >= 'A' && input[0] <= 'Z')) {
        switch (input[0]) {
            case 'a': case 'A':
            case 'e': case 'E':
            case 'i': case 'I':
            case 'o': case 'O':
            case 'u': case 'U':
            case 'y': case 'Y': 
                printf("Input is a vowel\n");
                break;
            default:
                printf("Input is a consonant\n");
                break;
        }
    } 
    else {
        printf("Invalid input\n");
    }

    return 0;
}