#include<stdio.h>
int main()
{
    char word;
    printf("Enter any character of ur choice\n");
    scanf("%c", &word);

    printf("The value of %c in ASCII is %d\n", word, word);
    return 0;
}