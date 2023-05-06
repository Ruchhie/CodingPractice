#include<stdio.h>

int Min(int iNo)
{
    static int iMin=9;

    int iDigit=0;

    if(iNo!=0)
    {
        iDigit=iNo%10;

        if(iMin>iDigit)
            iMin=iDigit;

        iNo=iNo/10;

        Min(iNo);
    }
    else

    return iMin;

}

int main()
{
    int iNo=0,iRet=0;
    printf("Enter a Number : ");
    scanf("%d",&iNo);

    iRet=Min(iNo);

    printf("Smallest Digits=%d",iRet);

    return 0;
}