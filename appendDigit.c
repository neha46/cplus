#include<stdio.h>
int main()
{
    int num,digit,result;
    printf("Enter number\n");
    scanf("%d",&num);
    num=num*10;
    printf("Enter digit for append\t");
    scanf("%d",&digit);
    digit=num+digit;
    printf(" Added number is %d\n",digit);
    return 0;
}
