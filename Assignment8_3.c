//factorial
#include<stdio.h>

int Factorial(int iNo)
{
    int iCnt=0;
    int iFact=1;

    if(iNo<0)
    {
        iNo=-iNo;
    }

    for(iCnt=iNo;iCnt>=1;iCnt--)
    {
        iFact=iFact*iCnt;
    }

    return iFact;
}

int main()
{
    int iData=0,iRet=0;

    printf("ENter a number\t:");
    scanf("%d",&iData);

    iRet=Factorial(iData);

    printf("Factorial of %d is %d",iData,iRet);

    return 0;

}