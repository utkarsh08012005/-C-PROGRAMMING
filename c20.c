#include <stdio.h>
int main() {
    int length, width, area, perimeter;

    // Input length and width of the rectangle
    printf("Enter length of the rectangle: ");
    scanf("%d", &length);

    printf("Enter width of the rectangle: ");
    scanf("%d", &width);

    // Calculate area and perimeter
    area = length * width;
    perimeter = 2 * (length + width);

    printf("Area of the rectangle = %d square units\n", area);
    printf("Perimeter of the rectangle = %d units\n", perimeter);

    return 0;
}
