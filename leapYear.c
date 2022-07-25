#include<stdio.h>
#include<conio.h>
 void main()
{
    int year;
    printf("enter any year ");
    scanf("%d",&year);
    if(year%100!=0&&(year%4==0||year%400==0))
        printf("%d is leap",year);
    else
        printf("%d is not leap",year);
    getch();
}

