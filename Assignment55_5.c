#include<stdio.h>

int Prod(int iNo)
{
    static int iProd=1;
    int iDigit=0;
    if(iNo>0)
    {
        iDigit=iNo%10;
        iProd=iProd*iDigit;
        iNo=iNo/10;

        Prod(iNo);
    }
    
    return iProd;

}

int main()
{
    int iNo=0,iRet=0;
    printf("Enter a Number : ");
    scanf("%d",&iNo);

    iRet=Prod(iNo);

    printf("Product of Digits=%d",iRet);

    return 0;
}