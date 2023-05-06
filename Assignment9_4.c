//odd Factorial
//Time Complexity =O(n/2 -1)
#include<stdio.h>

int OddFactorial(int iNo)
{
    int iOddFact=1,iCnt=0;

    if(iNo<0)
        iNo=-iNo;

    // for(iCnt=1;iCnt<=iNo;iCnt++)
    // {
    //     if(iCnt%2==0)
    //         iOddFact=iOddFact*iCnt;
    // }

    for(iCnt=1;iCnt<=iNo;iCnt=iCnt+2)
    {
      iOddFact=iOddFact*iCnt;
    }
    return iOddFact;
}

int main()
{
    int iValue=0,iRet=0;

    printf("Enter number:");
    scanf("%d",&iValue);

    iRet=OddFactorial(iValue);

    printf("Odd Factorial is %d",iRet);

    return 0;
}