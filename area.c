#include<stdio.h>
int main()
{
    int r;
    float a;
    printf("enter radius for area of circle\n");
    scanf(" %d",&r);
    a=(2*r*3.14);
    printf("Area of circle is %f  having the radius %d",a,r);
    return 0;
}
