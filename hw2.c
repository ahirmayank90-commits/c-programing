#include <stdio.h>
int main() // program of the calculation of the  area of triangle
{
    float h, b, area;
    printf("enter the value of height of the triangle :");
    scanf("%f", &h);
    printf("\nenter the value of base of the triangle :");
    scanf("%f", &b);
    area = 0.5 * h * b;
    printf("\nthe area of the triangle is %f", area);
}