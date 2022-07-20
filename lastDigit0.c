#include<stdio.h>
int main()
{
    int num,a;
    int div=10;
    int digit=-1;
    printf("Enter the number\n");
    scanf("%d",&num);
a=num/10;
printf("Numer with last digit as 0 is %d\n",a*10);
return 0;
}
