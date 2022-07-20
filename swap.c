#include<stdio.h>
int main()
{
    int num1,num2,t;
    printf("enter  number\n");
    scanf("%d%d",&num1,&num2);
    //before swaping
    printf("before swapping\n");
    printf("num1=%d\t num2=%d\n",num1,num2);
    t=num1;
    num1=num2;
    num2=t;
    //after swaping
    printf("after swapping\n");
    printf("num1=%d\t num2=%d\n",num1,num2);
    return 0;

}

