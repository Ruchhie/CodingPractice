#include<stdio.h>
#include<stdbool.h>

typedef unsigned int UINT;

/*

0000    0000   0000    0000    0000    0000    0000    0000

0000    0000   0000    0000    0000    0010    0100    0000

0       0       0       0       0       2        4      0

0X00000240


*/
UINT ToggleBit(UINT iNo)
{
    UINT iMask=0;
    UINT iRes=0;
    iMask=0X00000240;

    iRes=iMask ^ iNo;

    return iRes;
}

int main()
{
    UINT iValue=0;
    UINT iRet=0;

    printf("Enter a number ");
    scanf("%d",&iValue);

    iRet = ToggleBit(iValue);

    printf("Modified No = %d",iRet);

    return 0;
}