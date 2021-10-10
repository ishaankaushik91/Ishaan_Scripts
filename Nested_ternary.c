#include <stdio.h>
int main()
{
    int a = 10, b = 5, c = 9;
    int e;

    e = (a > b)   ? (a > c) ? a : c
        : (b > c) ? b
                  : c;

    printf("%d\n", e);

    return 0;
}