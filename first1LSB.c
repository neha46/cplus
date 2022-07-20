#include<stdio.h>
int main()
{
    int n,res;
    printf("enter a number\n");
    scanf("%d",&n);
     int count=0;
     while(n!=1)
     {
    res=n&1;
    count++;
    if(res==1)
{
    printf("position is %d",count);
}
n=n>>1;}


}
