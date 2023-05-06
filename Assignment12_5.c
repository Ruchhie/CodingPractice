//accept no and check frequency of digits less than 6
//Time Complexity=O(no of digits in number)

#include<stdio.h>

int CheckLessDigits(int iNo)
{
    int iRev=0;
    int iCnt=0;

    if(iNo<0)
        iNo=-iNo;
    
    while(iNo!=0)
    {
         iRev=iNo%10;

        if(iRev < 6)
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

    iRet=CheckLessDigits(iValue);

    printf("%d contains %d digits which are less than 6",iValue,iRet);

    return 0;
}
