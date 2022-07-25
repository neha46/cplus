#include<stdio.h>
int main()
{
     int n1,n2;
     printf("Enter  two number\n");
     scanf("%d%d",&n1,&n2);
     if(n1>n2)
        printf("%d is greator\n",n1);
     else if(n2>n1)
        printf("%d is greator\n",n2);
     else if(n1==n2)
        printf("%d & %d are same\n",n1,n2);
    else
        printf("invalid number");
    return 0;
}
