#include<stdio.h>
int main()
{
    int n,sum=0;
    printf("enter  number\n");
    scanf("%d",&n);
    printf("number is =%d\n",n);
while(n!=0)
    {
        sum=sum+n%10;
        n=n/10;

    }
    printf("sum is %d",sum);
    return 0;

}

