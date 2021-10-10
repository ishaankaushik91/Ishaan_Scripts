// Area of circle

#include<stdio.h>
int main()
{
    float radius;
    double area, circumference;
    printf("Please enter the radius of ur circle\n");
    scanf("%f", &radius);

    area = 3.14 * radius * radius;
    circumference = 2 * 3.14 * radius;
    printf("Area of ur circle is %.2le\n", area);
    printf("Circumference = %.2e\n", circumference);
    return 0;
}