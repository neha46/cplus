#include<stdio.h>
int main()
{  int n=10,count=0;
    printf(" Reverse of First 10  Odd Natural numbers\n");
    for(int i=2*n;n>0;i--)
    {
        if(i%2!=0&& count!=n)
            {printf("%d\t",i);
            count+=1;
            }
    }
    return 0;
}


