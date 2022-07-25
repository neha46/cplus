#include<stdio.h>
int main()
{
     int cost_p,sell_p;
     int profit , loss;
     printf("enter cost price of product\n");
     scanf("%d",&cost_p);
       printf("enter selling price of product\n");
     scanf("%d",&sell_p);
    printf("cost price = %d\n",cost_p);
     printf("selling price = %d\n",sell_p);
     profit=(sell_p-cost_p);
     loss=(cost_p-sell_p);
     printf("profit is %d%%\n",(profit/cost_p)*100);
     printf("loss is %d%%\n",(loss/sell_p)*100);
return 0;
}
