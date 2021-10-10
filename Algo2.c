#include<stdio.h>
int main()
{
    int num = 7;
    float amt = 123.45;
    char code = 'A';
    double pi = 3.1415926536;
    long int population_of_india = 100000000;
    char msg[] = "Hi";

    printf("\n NUM = %d \t AMT = %f \t CODE = %c \n PI = %e \t Indian Population = %1ld \n MESSAGE = %s\n", num, amt, code, pi, population_of_india, msg);

    return 0;    
}