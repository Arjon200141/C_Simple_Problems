#include <stdio.h>
#include <math.h>

int main()
{
    float radius, length, width, a, b, c, height,perimeter;

    printf(" \n Perimeter of rectangle \n");
    printf("\n Enter width and length: ");
    scanf("%f%f", &width,& length);
    perimeter = 2 * (width + length);
    printf("Perimeter of rectangle is: %.3f", perimeter);

    printf("\n Perimeter of triangle \n");
    printf("\n Enter the size of all sides: ");
    scanf("%f%f%f", &a, &b, &c);
    perimeter = a + b + c;
    printf("Perimeter of triangle is: %.3f", perimeter);

    printf(" \n Perimeter of circle \n");
    printf("\n Enter radius of circle : ");
    scanf("%f", &radius);
    perimeter = 2 * 3.1416 * radius;
    printf("Perimeter of circle is: %.3f", perimeter);

    printf(" \n Perimeter of equilateral triangle \n");
    printf("\n Enter any side: ");
    scanf("%f", &a);
    perimeter = 3 * a;
    printf("Perimeter of equilateral triangle is: %.3f", perimeter);

    printf(" \n Perimeter of right angled triangle \n");
    printf("\n Enter width and height: ");
    scanf("%f%f", &width, &height);
    perimeter = width + height + sqrt(width * width + height * height);
    printf("Perimeter of right angled triangle is: %.3f", perimeter);

    return 0;
}
