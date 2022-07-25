#include<stdio.h>
int main()
{
    int number;
    printf("Enter  number\n");
    scanf("%d",&number);
    if(number%3==0&& number%2==0)
        printf("!yes divisible\n");
    else
        printf("Not divisible\n");
    return 0;
}
