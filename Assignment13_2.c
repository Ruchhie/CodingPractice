//accept no and return count of Odd digit
//Time Complexity=O(no of digits in number)

#include<stdio.h>

int OddCount(int iNo)
{
    int iCnt=0,iDigit=0;
    
    if(iNo<0)
        iNo=-iNo;

    while(iNo!=0)
    {
        iDigit=iNo%10;

        if(iDigit%2==1)
            iCnt++;
        
        iNo=iNo/10;
    }

    return iCnt;
}

int main()
{
    int iNo=0,iRet=0;

    printf("Enter a number:");
    scanf("%d",&iNo);

    iRet=OddCount(iNo);

    printf("Odd Digits Count = %d",iRet);

    return 0;
}