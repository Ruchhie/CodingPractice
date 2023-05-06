//accept no and check frequency of 2 in it
//Time Complexity=O(no of digits in number)

#include<stdio.h>

int CheckTwo(int iNo)
{
    int iRev=0;
    int iCnt=0;

    if(iNo<0)
        iNo=-iNo;
    
    while(iNo!=0)
    {
         iRev=iNo%10;

        if(iRev ==2)
            iCnt++;

        iNo=iNo/10;
    }

    return iCnt;
}

int main()
{
    int iValue=0;
    int iRet=0;

    printf("Enter a number:");
    scanf("%d",&iValue);

    iRet=CheckTwo(iValue);

    printf("%d contains %d Two",iValue,iRet);

    return 0;
}
