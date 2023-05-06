#include<stdio.h>
#include<stdbool.h>

typedef unsigned int UINT;

/*

0000    0000   0000    0000    0000    0000    0000    0001
0X00000001

<<1
0000    0000   0000    0000    0000    0000    0000    0010
0       0       0       0       0       0        0      2
0X00000002

0000    0000    0000    0000    0000    1001    0000    0000

*/
bool NBitsCheck(UINT iNo,UINT iPos1,UINT iPos2)
{
    UINT iMask1=0X00000001;
    UINT iMask2=0X00000001;

    UINT iRes1=0,iRes2=0,iRes=0;

    if(iPos1<1 && iPos1>32 && iPos2<1 && iPos2>32)
    {
        printf("Invalid position");
        return false;
    }

    iMask1=iMask1<<(iPos1-1);
    iMask2=iMask2<<(iPos2-1);

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
    UINT iValue1=0,iPos1,iPos2;
    bool bRet=false;
    
    printf("Enter  number ");
    scanf("%d",&iValue1);

    printf("Enter  2 positions : ");
    scanf("%d%d",&iPos1,&iPos2);

    bRet=NBitsCheck(iValue1,iPos1,iPos2);

    if(bRet==true)
        printf("%d and %d bit is ON",iPos1,iPos2);
    else
        printf("%d or %d bit is OFF",iPos1,iPos2);

    return 0;
}