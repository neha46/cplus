#include<stdio.h>
int main()
{ int n;
    printf(" Cube of n natural number\n");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        printf("[%d]=%d\t\n",i,i*i*i);
    }
    return 0;
}


