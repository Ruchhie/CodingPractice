#include<stdio.h>
#include<stdbool.h>

typedef unsigned int UINT;

/*

0000    0000   0000    0000    0000    0000    0000    0000

0000    0000   0000    0000    0000    0001    1100    0000

0       0       0       0       0       1        C      0

0X000001C0


*/
bool ChkBit(UINT iNo)
{
    UINT iMask=0;
    UINT iRes=0;
    iMask=0X000001C0;

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
        printf("7th, 8th and 9th bit is ON\n");
    else
        printf("7th, 8th and 9th bit is OFF\n");

    return 0;
}