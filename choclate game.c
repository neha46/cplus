#include<stdio.h>
int main()
{
    int p,c,ch=21,value,rem,r=1;
    while(ch>1)

    {  printf("round==%d\n",r);
         printf("player choice under 1 to 4=");
        scanf("%d",&p);
        c=5-p;
        printf("computer choice under 1 to 4=%d\n",c);
        ch=(ch-(p+c));
        printf("%d choclates are remaining\n",ch);
    r++;
    printf("next round-------\n");
    }
    printf("         -------- YIPPPPPP HURREEEE-:)-------       \n");
    printf("\t\t********computers win********\t\t");

}
