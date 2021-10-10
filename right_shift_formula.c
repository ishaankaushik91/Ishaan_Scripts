//  Right shift operator formula code :
#include<stdio.h>
#include<math.h>
int main()
{
    // Formula for left shift operator << = a / (2^N) 
    // a is Desired number 
    // N is The number of bits we wanna add
    int a, N, formula, result;
    printf("Enter the number with wich u would like to perform >> operator\n");
    scanf("%d", &a);
    printf("Enter the number of bits u wanna replace\n");
    scanf("%d", &N);
    formula = a / pow(2, N);
    printf("%d\n", formula);
    printf("%d\n", a >> N);
    return 0;
}