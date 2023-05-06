#include<stdio.h>
#include<stdbool.h>

typedef unsigned int UINT;

/*

1111    1111    1111    1111    1111    1111    1111    1111
1111    1111    1111    1111    1111    1111    1011    1111
F       F       F       F       F       F       B       F
0XFFFFFFBF

*/
UINT OFFBit(UINT iNo)
{
    UINT iMask=0;
    UINT iRes=0;
    iMask=0XFFFFFFBF;

    iRes=iMask&iNo;

    return iRes;
}

int main()
{
    UINT iValue=0;
    UINT iRet=0;

    printf("Enter a number ");
    scanf("%d",&iValue);

    iRet = OFFBit(iValue);

    printf("Modified No = %d",iRet);

    return 0;
}