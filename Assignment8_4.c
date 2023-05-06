//multiplication table

#include<stdio.h>

 void Table(int iNo)
{
    int iCnt=0;
    int iMul=0;

    if(iNo<0)
    {
        iNo=-iNo;
    }

    for(iCnt=1;iCnt<=10;iCnt++)
    {
        iMul=iNo*iCnt;
        printf(" %d * %d = %d\n",iNo,iCnt,iMul);
    }

}

int main()
{
    int iData=0;

    printf("ENter a number\t:");
    scanf("%d",&iData);

    Table(iData);

    return 0;

}