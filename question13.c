#include <stdio.h>

int main() {
    int choice;
    float area;

    printf("Choose a shape:\n");
    printf("11 - Circle\n");
    printf("22 - Rectangle\n");
    printf("33 - Square\n");
    printf("44 - Triangle\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch (choice) {
        case 11:
            {
                float radius;
                printf("Enter the radius of the circle: ");
                scanf("%f", &radius);
                area = 3.14159 * radius * radius;
                printf("Area of the circle is: %.2f\n", area);
                break;
            }
        case 22:
            {
                float length, width;
                printf("Enter the length and width of the rectangle: ");
                scanf("%f %f", &length, &width);
                area = length * width;
                printf("Area of the rectangle is: %.2f\n", area);
                break;
            }
        case 33:
            {
                float side;
                printf("Enter the side length of the square: ");
                scanf("%f", &side);
                area = side * side;
                printf("Area of the square is: %.2f\n", area);
                break;
            }
        case 44:
            {
                float base, height;
                printf("Enter the base and height of the triangle: ");
                scanf("%f %f", &base, &height);
                area = 0.5 * base * height;
                printf("Area of the triangle is: %.2f\n", area);
                break;
            }
        default:
            printf("Invalid choice!\n");
    }

    return 0;
}
