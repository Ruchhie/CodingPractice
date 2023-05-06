//Assignment 4: Q5. Difference of Summation of Factor & Non Factors of given number
//Time Complexity: O(n-1)
//Logic2

#include<stdio.h>

int FactDiff(int iNo)                     
{
    int iSumFact=0;
    int iSumNonFact=0;
    int iDif=0;
    int iCnt=0;

    for(iCnt=1;iCnt<iNo;iCnt++)            //O(n-1)
    {
        if((iNo%iCnt)==0)
            iSumFact=iSumFact+iCnt;
        else
            iSumNonFact=iSumNonFact+iCnt;
    }

    iDif=iSumFact-iSumNonFact;      

    return iDif;
}

int main()
{
    int iData=0;
    int iRet=0;

    printf("Enter number:\t");
    scanf("%d",&iData);

    iRet=FactDiff(iData);

    printf("\nDifference of Summation of Factor & Non Factors of %d is %d",iData,iRet);
}