#include<stdio.h>
int main()
{
    int n,i;
    printf("enter  number\n");
    scanf("%d",&n);
    i=n%10;
    printf("unit digit of %d= %d\n",n,i);
    return 0;

}
