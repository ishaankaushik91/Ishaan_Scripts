#include<stdio.h>
int main ()
{
    int num, ones_place;
    printf("Enter any number\n");
    scanf("%d", &num);
    ones_place = num % 10;
    
    printf("Digit at ones place of %d is %d\n", num, ones_place);
    return 0;
}