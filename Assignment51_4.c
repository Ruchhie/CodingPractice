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
UINT ToggleBit(UINT iNo,UINT iPos)
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

    iRes=iMask ^ iNo;

    return iRes;

}

int main()
{
    UINT iValue=0,iPos;
    UINT iRet=0;

    printf("Enter a number ");
    scanf("%d",&iValue);

    printf("Enter a position ");
    scanf("%d",&iPos);

    iRet = ToggleBit(iValue,iPos);

    printf("Modified No = %d \n",iRet);


    return 0;
}