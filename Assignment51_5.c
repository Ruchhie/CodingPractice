#include<stdio.h>
#include<stdbool.h>

typedef unsigned int UINT;

/*

0000    0000   0000    0000    0000    0000    0000    0000
1111    0000   0000    0000    0000    0000    0000    1111
0XF000000F


*/
UINT ToggleBit(UINT iNo)
{
    UINT iMask=0;
    UINT iRes=0;
    iMask=0XF000000F;
  

    iRes=iMask ^ iNo;

    return iRes;

}

int main()
{
    UINT iValue=0,iPos;
    UINT iRet=0;

    printf("Enter a number ");
    scanf("%d",&iValue);

    iRet = ToggleBit(iValue);

    printf("Modified No = %d \n",iRet);


    return 0;
}