//accept no and check frequency of 4 in it
//Time Complexity=O(no of digits in number)

#include<stdio.h>

int CheckFour(int iNo)
{
    int iRev=0;
    int iCnt=0;

    if(iNo<0)
        iNo=-iNo;
    
    while(iNo!=0)
    {
         iRev=iNo%10;

        if(iRev ==4)
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

    iRet=CheckFour(iValue);

    printf("%d contains %d Four",iValue,iRet);

    return 0;
}
