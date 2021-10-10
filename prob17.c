#include<stdio.h>
int main()
{
    char word;
    printf("Enter any character in upper case\n");
    scanf("%c", &word);

    printf("The character in lower case is %c\n", word+32);
    return 0;
}