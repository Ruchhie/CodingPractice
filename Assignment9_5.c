//difference even factorial and odd factorial 
//Time Complexity = O( 2*(n/2 -1) )

#include<stdio.h>

int OddFactorial(int iNo)
{
    int iOddFact=1,iCnt=0;

    for(iCnt=1;iCnt<=iNo;iCnt=iCnt+2)
    {
      iOddFact=iOddFact*iCnt;
    }
    return iOddFact;
}

int EvenFactorial(int iNo)
{
    int iEvenFact=1,iCnt=0;

    for(iCnt=2;iCnt<=iNo;iCnt=iCnt+2)
    {
      iEvenFact=iEvenFact*iCnt;
    }
    return iEvenFact;
}

int EvenOddDiff(int iNo)
{
    int iEven=0,iOdd=0;

    if(iNo<0)
        iNo=-iNo;

    iEven=EvenFactorial(iNo);
    iOdd=OddFactorial(iNo);

    return iEven-iOdd;
}

int main()
{
    int iValue=0,iRet=0;

    printf("Enter number:");
    scanf("%d",&iValue);

    iRet=EvenOddDiff(iValue);

    printf("Factorial Difference is %d",iRet);

    return 0;
    
}