#include<stdio.h>
int main()
{
    int number;
    printf("Enter a number\n");
    scanf("%d",&number);
    if(number%5==0)
        printf("yes! its  divisible\n");
    else
        printf("*_* Not divisible\n");
    return 0;

}
