//accept no and return Multiplication of Digits 
//Time Complexity=O(no of digits in number)

#include<stdio.h>

int DigitsMultiply(int iNo)
{
    int iDigit=0;
    int iMul=1;

    if(iNo<0)
        iNo=-iNo;

    while(iNo!=0)
    {
        iDigit=iNo%10;

        if(iDigit!=0)
            iMul=iMul*iDigit;
        
        iNo=iNo/10;
    }

    return iMul;
}

int main()
{
    int iNo=0,iRet=0;

    printf("Enter a number:");
    scanf("%d",&iNo);

    iRet=DigitsMultiply(iNo);

    printf("Multiplication of Digits = %d",iRet);

    return 0;
}