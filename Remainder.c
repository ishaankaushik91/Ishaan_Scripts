// Without using "%" sheeeessshhh 😎

#include <stdio.h>
int main()
{
    int dividend,divisior,remainder;
    printf("Enter dividend :");
    scanf("%d",&dividend);
    printf("Enter divisor :");
    scanf("%d",&divisior);
 
    remainder=dividend-(dividend/divisior)*divisior;
 
    printf("Remainder is = %d\n",remainder);
    return 0;
}