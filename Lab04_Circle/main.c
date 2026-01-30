#include <stdio.h>

float PI = 3.14159;

int main() {
    float area;
    float circumference;
    int r;
    printf("Enter the radius of your circle: ");
    scanf("%d", &r);
    area = PI * (r*r);
    circumference = 2 * PI * r;
    printf("The area of your circle is: %f\n", area);
    printf("The circumference of your circle is: %f\n", circumference);   

    return 0;
}