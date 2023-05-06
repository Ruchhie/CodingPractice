#include<stdio.h>
#include<stdbool.h>

typedef unsigned int UINT;

/*

0000    0000   0000    0000    0000    0000    0000    0000

0000    1000   0001    0000    0100    0000    0100    0000

0       8       1       0       4       0        4      0

0X08104040


*/
bool ChkBit(UINT iNo)
{
    UINT iMask=0;
    UINT iRes=0;
    iMask=0X08104040;

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
        printf("7th, 15th, 21st and 28th bit is ON\n");
    else
        printf("7th, 15th, 21st or 28th  is OFF\n");

    return 0;
}