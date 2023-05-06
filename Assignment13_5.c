//accept no and return difference of summation of even and odd
//Time Complexity=O(no of digits in number)

#include<stdio.h>

int Summation(int iNo)
{
    int iOddSum=0,iEvenSum=0,iDigit=0;
    int iRes=0;

    if(iNo<0)
        iNo=-iNo;
            
    while(iNo!=0)
    {
        iDigit=iNo%10;

        if(iDigit%2==0)
            iEvenSum=iEvenSum+iDigit;
        else
            iOddSum=iOddSum+iDigit;
        
        iNo=iNo/10;
    }

    iRes=iEvenSum-iOddSum;
    return iRes;
}

int main()
{
    int iNo=0,iRet=0;

    printf("Enter a number:");
    scanf("%d",&iNo);

    iRet=Summation(iNo);

    printf("Result = %d",iRet);

    return 0;
}