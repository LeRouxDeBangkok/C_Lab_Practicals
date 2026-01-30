#include <stdio.h>

int main() {
    char name[50];
    int age;

    printf("Enter your name here: ");
    scanf("%s", name);
    printf("Enter your age: ");
    scanf("%d", &age);
    printf("Your name is %s, you are %d years old.\n", name, age);
}