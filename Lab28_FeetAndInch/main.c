#include <stdio.h>

int main() {
    int feet1, feet2, feet3, inch1, inch2, inch3, m, cm;
    
    printf("Enter first distance in inferior units:\n");
    printf("Feet: ");
    scanf("%d", &feet1);
    printf("Inches: ");
    scanf("%d", &inch1);
    printf("Enter second distance in freedom units:\n");
    printf("Feet: ");
    scanf("%d", &feet2);
    printf("Inches: ");
    scanf("%d", &inch2);

    inch3 = inch1 + inch2;
    feet3 = feet1 + feet2 + (inch3 / 12);
    inch3 = inch3 % 12; 
    int total_inches = (feet3 * 12) + inch3;
    float total_cm = total_inches * 2.54;
    m = (int)total_cm / 100;
    cm = (int)total_cm % 100;

    printf("Total= %d feet %d inches\n", feet3, inch3);
    printf("Bonus, special translation to the only measuring system that makes sense:\n");
    printf("Total = %d meters, %d centimeters\n", m, cm);

    return 0;
}