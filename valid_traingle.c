#include<stdio.h>
int main()
{int side1,side2,side3;
printf("Enter side of traingle");
scanf("%d%d%d",&side1,&side2,&side3);
if(side1+side2>side3||side2+side3>side1||side1+side3>side2)
    printf("valid traingle\n");
else
    printf("Invalid traingle");
return 0;

}
