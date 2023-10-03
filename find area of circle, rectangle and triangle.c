#include<stdio.h>
#define PI 3.14

main()
{
	float r,area;
	double length,width;
	double base,height;

    printf("Enter the base of the triangle: ");
    scanf("%lf", &base);

    printf("Enter the height of the triangle: ");
    scanf("%lf", &height);

    area = 0.5 * base * height;

    printf("The area of the triangle is: %lf\n", area);

    printf("Enter the length of the rectangle: ");
    scanf("%lf", &length);

    printf("Enter the width of the rectangle: ");
    scanf("%lf", &width);

    area = length * width;

    printf("The area of the rectangle is: %lf\n", area);
	printf("enter radius: ");
	scanf("%f",&r);
	
	area=PI*r*r;
	printf("area of circle is: %.21f",area);
	
}
