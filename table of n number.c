#include<stdio.h>
int main()
{ int n;
    printf("Table of n ->\n");
    scanf("%d",&n);

    for(int i=1;i<=10;i++)
    {
        printf("%d*%d=%d\t\n",n,i,n*i);
    }
    return 0;
}

