#include<stdio.h>
int main()
{  int n=10,count=0;
    printf("First 10 Natural numbers\n");
    for(int i=1;i<=2*n;i++)
    {
        if(i%2!=0&& count!=n)
            {printf("%d\t",i);
            count+=1;
            }
    }
    return 0;
}

