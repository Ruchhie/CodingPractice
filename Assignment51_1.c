#include<stdio.h>
#include<stdbool.h>

typedef unsigned int UINT;

/*

0000    0000   0000    0000    0000    0000    0000    0001
0X00000001

>>iPos
0000    0000   0000    0000    0000    0000    0000    0010
0       0       0       0       0       0        0      2
0X00000002


*/
bool CheckBit(UINT iNo,UINT iPos)
{
    UINT iMask=0;
    UINT iRes=0;
    iMask=0X00000001;

    if(iPos<1 & iPos>32)
    {
        printf("Invalid position");
        return false;
    }    

    iMask=iMask<<(iPos-1);

    iRes=iMask & iNo;

    if(iRes==iMask)
        return true;
    else
        return false;

}

int main()
{
    UINT iValue=0,iPos;
    bool bRet=false;

    printf("Enter a number ");
    scanf("%d",&iValue);

    printf("Enter a position ");
    scanf("%d",&iPos);

    bRet = CheckBit(iValue,iPos);

    if(bRet==true)
        printf("BIT IS ON\n");
    else
        printf("BIT IS OFF\n");

    return 0;
}