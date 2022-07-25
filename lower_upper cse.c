#include<stdio.h>
int main()
{
    char ch;
    printf("Enter a character\n");
    scanf("%c",&ch);
    if(ch>=97 || ch<=122)
    printf("Lowercase\n");
else if(ch>=65 || ch<=90)
    printf("Uppercase\n");
else if(ch>=48 ||ch<=57)
    printf("Digits\n");
else if(ch>=32 ||ch<=47)
    printf("Special characters\n");
else
    printf("invalid\n");
return 0;}
