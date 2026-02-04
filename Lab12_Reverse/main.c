#include <stdio.h>

int main() {
    int num, rev = 0, count = 0; 
    
    printf("Enter a number: ");
    scanf("%d", &num);

    while(num != 0) {
        int digit = num % 10;
        rev = rev * 10 + digit;
        num /= 10;
        count++;
    }
    
    printf("Reverse is: %d\n", rev);
    printf("There are %d digits in this number\n", count);

    return 0;
}