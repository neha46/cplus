#include<stdio.h>
int main()
{
     int number, rem,count=0;
     printf("Enter number\n");
     scanf("%d",&number);
     while(number!=0)
     {
         rem=number%10;
         count+=1;
         number=number/10;
     }
     if(count==3)
     {
         printf("Yes it is 3 digit number\n",number);
     }
     else
        printf(" It is Not 3 digit number\n");
     return 0;
}
