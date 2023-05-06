//accept no and return Digits Count in between 3 and 7 
//Time Complexity=O(no of digits in number)

#include<stdio.h>

int Count(int iNo)
{
    int iCnt=0,iDigit=0;
    
    if(iNo<0)
        iNo=-iNo;

    while(iNo!=0)
    {
        iDigit=iNo%10;

        if(iDigit>3 && iDigit<7)
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

    iRet=Count(iNo);

    printf("Digits Count in between 3 and 7 = %d",iRet);

    return 0;
}