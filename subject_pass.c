#include<stdio.h>
int main()
{
    int hindi,english,maths,physics,art;
    int result;
    printf("Enter the marks from out of 100--\n");
    printf("Hindi\t English\t Maths\t  Physics\t Art\t \n");
    scanf("%d%d%d%d%d",&hindi,&english,&maths,&physics,&art);
    printf("Hindi=%d\t English=%d\t Maths=%d\t Physics=%d\t Art=%d\t\n",hindi,english,maths,physics,art);
    result=((hindi+english+maths+physics+art)*100)/500;
    if(result>70)
        printf("pass with 'A'\n ");
    else if(result >50)
        printf("pass with 'B'\n");
    else if(result>30)
        printf("pass with 'C'\n");
    else
        printf("Fail\n");
    return 0;


}
