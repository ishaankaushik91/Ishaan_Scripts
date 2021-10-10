// Left shift operator formula code :
#include<stdio.h>
#include<math.h>
int main()
{
    // Formula for left shift operator << = a * 2^N 
    // a is Desired number 
    // N is The number of bits we wanna add
    int a, N, formula, result;
    printf("Enter number to use left shift operator on (<<) \n");
    scanf("%d",&a);
    printf("How many bits would u like to add ?\n");
    scanf("%d", &N);
    formula = pow(2, N);
    result = a * formula;

    printf("The value of %d after using << operator for %d bits = %d\n",a, N, result);
    printf("%d\n", a << N); 
    
    
    return 0;
}