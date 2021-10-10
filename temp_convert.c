// (32°F − 32) × 5/9 = 0°C
#include<stdio.h>
int main()
{
    float fahrenheit, celcius;
    printf("Enter the temperatur in fahrenheit\n");
    scanf("%f", &fahrenheit);
    celcius = (fahrenheit - 32) * 5/9;

    printf("%f fahrenheit = %.3f celcius\n", fahrenheit,celcius);
    return 0;
}