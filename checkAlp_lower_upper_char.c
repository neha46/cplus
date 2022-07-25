#include<stdio.h>
int main()
{
    char ch;
    printf("Enter a number\n");
    scanf("%c",&ch);
switch(ch)
{
case  97...122:
    printf("lowercase\n");
case  65...90:
    printf("Uppercase\n");
case  48...57:
    printf("Digits\n");
case  32...47:
    printf("Special characters\n");
return 0;}
}
