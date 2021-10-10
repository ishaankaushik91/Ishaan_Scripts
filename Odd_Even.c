// Using Ternary to check if a number is odd or ever

#include<stdio.h>
int main()
{
    int a;
    printf("Hey user pls enter a number to check if it is odd or not\n");
    scanf("%d", &a);

    (a % 2 == 0) ? printf("%d is an even number\n", a) : printf("%d is an odd number\n", a);


    return 0;
}