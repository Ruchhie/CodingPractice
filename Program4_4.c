//Assignment 4: Q4. Summation of Non Factors of given number
//Time Complexity=O(n-1)

#include<stdio.h>

int SumNonFact(int iNo)
{
    int iCnt=0,iSum=0;

    for(iCnt=1;iCnt<iNo;iCnt++)            
    {
        if((iNo%iCnt)!=0)
            iSum=iSum+iCnt;
    }

    return iSum;
}

int main()
{
    int iData=0;
    int iRet=0;

    printf("Enter number:\t");
    scanf("%d",&iData);

    iRet=SumNonFact(iData);

    printf("\nNonFactor Summation of %d is %d",iData,iRet);

}