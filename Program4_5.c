//Assignment 4: Q5. Difference of Summation of Factor & Non Factors of given number
//Time Complexity:Logic1-> O(n/2)+O(n-1)            Logic2-> O(n-1)

#include<stdio.h>

//Logic1 by function calls
int SumNonFact(int iNo)
{
    int iCnt=0,iSum=0;

    for(iCnt=1;iCnt<iNo;iCnt++)            //O(n-1)
    {
        if((iNo%iCnt)!=0)
            iSum=iSum+iCnt;
    }

    return iSum;
}

int SumFact(int iNo)
{
    int iCnt=0,iSum=0;

    for(iCnt=1;iCnt<=(iNo/2);iCnt++)           // O(n/2)
    {
        if((iNo%iCnt)==0)
            iSum=iSum+iCnt;
    }

    return iSum;
}

int FactDiff(int iData)                     // O(n/2)+O(n-1)
{
    int iSumFact=0;
    int iSumNonFact=0;
    int iDif=0;

    iSumFact=SumFact(iData);                // O(n/2)
    iSumNonFact=SumNonFact(iData);          //O(n-1)

    iDif=iSumFact-iSumNonFact;      

    return iDif;
}

/*
LOGIC 2

int FactDiff(int iNo)                     // O(n-1)
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
*/
int main()
{
    int iData=0;
    int iRet=0;

    printf("Enter number:\t");
    scanf("%d",&iData);

    iRet=FactDiff(iData);

    printf("\nDifference of Summation of Factor & Non Factors of %d is %d",iData,iRet);
}