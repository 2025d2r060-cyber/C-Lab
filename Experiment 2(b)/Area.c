#include <stdio.h>

int main() {
    float radius, side, length, width;

    printf("Enter the radius of the circle: ");
    scanf("%f", &radius);
    printf("Area of Circle = %.2f\n", 3.14 * radius * radius);
    printf("Perimeter (Circumference) of Circle = %.2f\n", 6.28 * radius);

    printf("Enter the length of a side of the square: ");
    scanf("%f", &side);
    printf("Area of Square = %.2f\n", side * side);
    printf("Perimeter of Square = %.2f\n", 4 * side);
    
    printf("Enter the length and width of the rectangle: ");
    scanf("%f %f", &length, &width);
    printf("Area of Rectangle = %.2f\n", length * width);
    printf("Perimeter of Rectangle = %.2f\n", 2 * (length + width));
    
    return 0;
}