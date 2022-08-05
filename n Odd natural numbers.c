#include<stdio.h>
int main()
{  int n,count=0;
    printf("First n Natural odd numbers\n");
    scanf("%d",&n);
    for(int i=1;i<=2*n;i++)
    {
        if(i%2!=0&& count!=n)
            {printf("%d\t",i);
            count+=1;
            }
    }
    return 0;
}

