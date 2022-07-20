#include<stdio.h>
int main()
{ int n,rem=0,sum=0;
printf("enter a number\n");
scanf("%d",&n);
rem=(n%10)*100;
n=(n/10);
sum=sum+rem+(n%10)*10+(n/10);
printf("%d rotated as %d\n",n,sum);
return 0;
}
