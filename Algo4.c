#include<stdio.h>
#include<math.h>
int main()
{
    float a, b, c, area, s;
    printf("Enter length of 3 sides of triangle\n");
    scanf("%f %f %f", &a, &b, &c);

    s = (a+b+c)/2;
    area = sqrt(s* (s-a) * (s-b) * (s-c));
    printf("%f is the are of triangle \n", area);

    return 0;
}