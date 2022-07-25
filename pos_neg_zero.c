#include<stdio.h>
int main()
{
    int number;
    printf("Enter a number\n");
    scanf("%d",&number);
if(number>0)
    printf("Positive\n");
else if(number<0)
    printf("Negative\n");
else if(number==0)
    printf("Zero\n");
else
    printf("Invalid number");
return 0;
}
