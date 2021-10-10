// Ternary to find biggest number :

#include<stdio.h>
int main()
{
    int a, b;
    printf("Enter a value for a\n");
    scanf("%d", &a);

    printf("Enter a value for \n");
    scanf("%d", &b);

    (a > b) ? printf(" a = %d is greater than b = %d\n", a, b) : printf(" b = %d is greater than a = %d\n", b, a);
    return 0;
}