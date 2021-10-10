#include<stdio.h>
int main()
{
    int num;
    float amt;
    char code;
    double pi;
    long int population_of_India;
    char msg[10];

    printf("Enter a num\n");
    scanf("%d", &num);

    printf("Enter amt\n");
    scanf("%f", &amt);

    printf("Enter code");
    scanf("%c", &code);

    printf("Enetr pi value\n");
    scanf("%le", &pi);

    printf("Enter Indian Population\n");
    scanf("%ld", &population_of_India);

    printf("Enter msg\n");
    scanf("%s", msg);

    printf("\n NUM = %d \t AMT = %f \t CODE = %c \n PI = %e \t Indian Population = %1ld \n MESSAGE = %s\n", num, amt, code, pi, population_of_India, msg);
    
    return 0;
}