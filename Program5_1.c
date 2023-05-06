//Assignment 4: Q1. Multiplication of Factors of given number
//Time Complexity=O((n/2)-1)

#include<stdio.h>

int MultFactor(int iNo)
{
    int iCnt=0,iMult=1;

    for(iCnt=2;iCnt<=(iNo/2);iCnt++)            //Time Complexity=O((n/2)-1)     ...1*no=no thats why kept iCnt as 2
    {
        if((iNo%iCnt)==0)
            iMult=iMult*iCnt;
    }

    return iMult;
}

int main()
{
    int iData=0;
    int iRet=0;

    printf("Enter number:\t");
    scanf("%d",&iData);

    iRet=MultFactor(iData);

    printf("\nFactor Mutiplication of %d is %d",iData,iRet);

}