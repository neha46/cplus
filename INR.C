#include<stdio.h>
int main()
{
    float  one_usd=76.23,rs;
    long int am;
    printf("Enter amount\n");
    scanf("%d",&am);
    rs=1/one_usd;
    printf("USD is %d\n",am/rs);
    return 0;

}
