//accept no and check if no. contains zero
//Time Complexity=O(no of digits in number)

#include<stdio.h>
#define TRUE 1
#define FALSE 0
typedef int BOOL;

BOOL CheckZero(int iNo)
{
    if(iNo<0)
        iNo=-iNo;
    
    while(iNo!=0)
    {
        // iRev=iNo%10;

        if( iNo%10 ==0)
            return TRUE;

        iNo=iNo/10;
    }
    return FALSE;
}

int main()
{
    int iValue=0;
    BOOL bRet=FALSE;

    printf("Enter a number:");
    scanf("%d",&iValue);

    bRet=CheckZero(iValue);

    if(bRet==TRUE)
        printf("It contains Zero");
    else
        printf("Their is no Zero");

    return 0;
}
