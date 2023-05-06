#include<stdio.h>
#include<stdbool.h>

typedef unsigned int UINT;

/*

0000    0000   0000    0000    0000    0000    0000    0000

0000    0000   0000    0010    0000    0000    0001    0000

0       0       0       2       0       0        1      0

0X00020010


*/
bool ChkBit(UINT iNo)
{
    UINT iMask=0;
    UINT iRes=0;
    iMask=0X00020010;

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
        printf("5th bit and 18th is ON\n");
    else
        printf("5th bit and 18th bit is OFF\n");

    return 0;
}