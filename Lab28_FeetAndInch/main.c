#include <stdio.h>

struct Distance {
    int feet;
    int inch;
};

int main() {
    struct Distance d1, d2, d3;
    
    printf("Enter first distance in feet/inch units:\n");
    printf("Feet: ");
    scanf("%d", &d1.feet);
    printf("Inches: ");
    scanf("%d", &d1.inch);
    printf("Enter second distance in feet/inch units:\n");
    printf("Feet: ");
    scanf("%d", &d2.feet);
    printf("Inches: ");
    scanf("%d", &d2.inch);

    d3.inch = d1.inch + d2.inch;
    d3.feet = d1.feet + d2.feet + (d3.inch / 12);
    d3.inch = d3.inch % 12; 

    printf("Total= %d feet %d inches\n", d3.feet, d3.inch);

    return 0;
}