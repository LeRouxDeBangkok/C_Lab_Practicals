#include <stdio.h>

float PI = 3.14159;

int circleArea(int x) {
    float area;
    area = PI * (x*x);
    return area;
}

int circleCircumference(int x) {
    float circumference;
    circumference = 2 * PI * x;
    return circumference;
}

int main() {
    int r;
    printf("Enter de radius of your circle: ");
    scanf("%d", &r);
    int a = circleArea(r);
    int c = circleCircumference(r);
    printf("The area of your circle is: %d\n", a);
    printf("The circumference of your circle is: %d\n", c);

    return 0;
}