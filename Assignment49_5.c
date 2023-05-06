#include<stdio.h>
#include<stdbool.h>

typedef unsigned int UINT;

/*

0000    0000   0000    0000    0000    0000    0000    0000

1000    0000   0000    0000    0000    0000    0000    0001

8       0       0       0       0       0        0      1

0X80000001


*/
bool ChkBit(UINT iNo)
{
    UINT iMask=0;
    UINT iRes=0;
    iMask=0X80000001;

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
        printf("First and last bit is ON\n");
    else
        printf("First and last bit is OFF\n");

    return 0;
}