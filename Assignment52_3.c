#include<stdio.h>
#include<stdbool.h>

typedef unsigned int UINT;

/*

0000    0000   0000    0000    0000    0000    0000    0001
0X00000001

>>1
0000    0000   0000    0000    0000    0000    0000    0010
0       0       0       0       0       0        0      2
0X00000002

0000    0000    0000    0000    0000    1001    0000    0000

*/
bool NBitsCheck(UINT iNo)
{
    UINT iMask1=0X00000001;
    UINT iMask2=0X00000001;

    UINT iRes1=0,iRes2=0,iRes=0;

    iMask1=iMask1<<8;
    iMask2=iMask2<<11;

    iRes1=iNo & iMask1;
    iRes2=iNo & iMask2;

    iRes=iRes1 | iRes2;

    if(iNo == iRes)
        return true;
    else
        return false;    
    
}

int main()
{
    UINT iValue1=0;
    bool bRet=false;
    
    printf("Enter  number ");
    scanf("%d",&iValue1);

    bRet=NBitsCheck(iValue1);

    if(bRet==true)
        printf("9th and 12th bit is ON");
    else
        printf("9th or 12th bit is OFF");

    return 0;
}