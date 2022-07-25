#include<stdio.h>
#include<math.h>
 int main()
{
int a,b,c,x,m;
int r1,r2;
int d;
printf("enter the elememts a,b,c,x for  equations \n ");
scanf("%d%d%d%d",&a,&b,&c,&x);
printf("a=%d\n,b=%d\n,c=%d\n,x=%d\n",a,b,c,x);
d=(b*b)-4*a*c;
if(d>0)
{
    r1=(-b+sqrt(d/(2*a)));
    r2=(-b-sqrt(d/(2*a)));
    if(r1!=r2)
    printf("r1=%d\tr2=%d are distinct\n",r1,r2);
    else
        printf("r1=%d\tr2=%d are real\n",r1,r2);
}
else if(d<0)
    printf("r1=%d\tr2=%d are imaginary\n",r1,r2);

return 0;
}
