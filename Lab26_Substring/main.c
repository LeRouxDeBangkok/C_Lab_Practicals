#include <stdio.h>
#include <string.h>

int main() {
    char input[100], sub[100];
    int count = 0;
    int i, j;
    int strLen, subLen;

    printf("Enter your string: ");
    scanf("%s[^\n]", input);
    printf("Enter the substring: ");
    scanf("%s[^\n]", sub);
    strLen = strlen(input);
    subLen = strlen(sub);

    for (i = 0; i <= strLen - subLen; i++) {
        int match = 1;
        for (j = 0; j < subLen; j++) {
            if (input[i + j] != sub[j]) {
                match = 0;
                break;
            }
        }
        if (match == 1) {
            count++;
        }
    }
    printf("Total appearances of '%s': %d\n", sub, count);

    return 0;
}