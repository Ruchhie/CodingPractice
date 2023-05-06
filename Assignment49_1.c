#include<stdio.h>
#include<stdbool.h>

typedef unsigned int UINT;

bool ChkBit(UINT iNo)
{
    UINT iMask=0;
    UINT iRes=0;
    iMask=0X00004000;

    iRes=iMask&iNo;

    if(iRes==iMask)
        return true;
    else
        return false;
}

int main()
{
    UINT iValue=0;
    bool bRet=false;

    printf("Enter a number ");
    scanf("%d",&iValue);

    bRet = ChkBit(iValue);

    if(bRet==true)
        printf("15th bit is ON\n");
    else
        printf("15th bit is OFF\n");

    return 0;
}