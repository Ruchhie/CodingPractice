#include<stdio.h>

int Max(int iNo)
{
    static int iMax=0;

    int iDigit=0;

    if(iNo!=0)
    {
        iDigit=iNo%10;

        if(iMax<iDigit)
            iMax=iDigit;

        iNo=iNo/10;

        Max(iNo);
    }
    else

    return iMax;

}

int main()
{
    int iNo=0,iRet=0;
    printf("Enter a Number : ");
    scanf("%d",&iNo);

    iRet=Max(iNo);

    printf("Largest Digits=%d",iRet);

    return 0;
}