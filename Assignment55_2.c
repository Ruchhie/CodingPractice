#include<stdio.h>

int Sum(int iNo)
{
    static int iSum=0;
    int iDigit=0;
    if(iNo>0)
    {
        iDigit=iNo%10;
        iSum=iSum+iDigit;
        iNo=iNo/10;

        Sum(iNo);
    }
    
    return iSum;

}

int main()
{
    int iNo=0,iRet=0;
    printf("Enter a Number : ");
    scanf("%d",&iNo);

    iRet=Sum(iNo);

    printf("Sum of Digits=%d",iRet);

    return 0;
}