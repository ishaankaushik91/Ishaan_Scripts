#include <stdio.h>
int main()
{   
    // Using  BitWise NOT & Arithmetic :  ~N (a+1)
    int a, b;
    printf("Enter 2 nums\n");
    scanf("%d %d", &a, &b);

    (a > b) ? printf("Subtraction is %d\n", ~b + (a + 1)) : printf("Subtraction is %d\n", ~a + (b + 1));
    
    
    // Using Mathematical Way & Arithmetic:  -(N+1) + (a+1)
    int c, d;
    int formula;
    printf("Enter 2 nums\n");
    scanf("%d %d", &c, &d);
    formula = -(c + 1) + (d + 1);
    
    (c > d) ? printf("%d\n", -(d + 1) + (c + 1)) : printf("%d\n", -(c + 1) + (d + 1));
    

    return 0;
}