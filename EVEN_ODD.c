#include<stdio.h>
int main()
{
    int n,result=0;
    printf("Enter a number\n");
    scanf("%d",&n);
    printf("your entered number is %d\n",n);
    result=n&1;
    if(result==1)
    {
        printf("%d is ODD\n",n);
    }
    else
        printf("%d is EVEN\n",n);
return 0;

}
