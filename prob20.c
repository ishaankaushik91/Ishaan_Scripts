#include<stdio.h>
int main()
{
    int num1, num2;
    printf("Enter the 1st number\n");
    scanf("%d", &num1);
    printf("Enter the 2nd number\n");
    scanf("%d", &num2);

    printf("Value of a before %d\n", num1);
    printf("Value of b before %d\n", num2);

    num1 = num1 + num2; 
    num2 = num1 - num2; 
    num1 = num1 - num2;

    printf("Value of a after %d\n", num1);
    printf("Value of a after %d\n", num2);

    return 0;
}