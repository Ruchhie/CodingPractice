#include<stdio.h>

int Fact(int iNo)
{
    static int iRes=1;

    if(iNo>0)
    {
        iRes=iRes*iNo;
        iNo--;
        Fact(iNo);
    }

    return iRes;
}

int main()
{
    int iValue=0,iRet=0;

    printf("Enter a Number: ");
    scanf("%d",&iValue);
    iRet=Fact(iValue);
    printf("Factorial = %d",iRet);

    return 0;
}