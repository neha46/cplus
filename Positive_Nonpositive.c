#include<stdio.h>
int main()
{
    int n;
    printf("Enter Number\n");
    scanf("%d",&n);
    if(n>0)
    {
        printf("%d is positive\n",n);
    }
    else
        printf("Non positive\n");
    return 0;
}
