//Even Factorial
//Time Complexity =O(n/2 -1)
#include<stdio.h>

int EvenFactorial(int iNo)
{
    int iEvenFact=1,iCnt=0;

    if(iNo<0)
        iNo=-iNo;

    // for(iCnt=1;iCnt<=iNo;iCnt++)
    // {
    //     if(iCnt%2==0)
    //         iEvenFact=iEvenFact*iCnt;
    // }

    for(iCnt=2;iCnt<=iNo;iCnt=iCnt+2)
    {
      iEvenFact=iEvenFact*iCnt;
    }
    return iEvenFact;
}

int main()
{
    int iValue=0,iRet=0;

    printf("Enter number:");
    scanf("%d",&iValue);

    iRet=EvenFactorial(iValue);

    printf("Even Factorial is %d",iRet);

    return 0;
}