// Ternary to find smallest number :

#include<stdio.h>
int main()
{
    int a, b;
    printf("Enter a value for a\n");
    scanf("%d", &a);

    printf("Enter a value for \n");
    scanf("%d", &b);

    (a < b) ? printf("a is %d and b is %d therefore, %d is smaller than %d\n", a, b, a, b) : printf("a is %d and b is %d therefore, %d is smaller than %d\n", b, a, b, a);
    return 0;
}