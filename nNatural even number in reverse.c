
#include<stdio.h>
int main()
{  int n,count=0;
    printf("First n Reverse of Even Natural numbers\n");
    scanf("%d",&n);
    for(int i=2*n;n>0;i--)
    {
        if(i%2==0&& count!=n)
            {printf("%d\t",i);
            count+=1;
            }
    }
    return 0;
}



