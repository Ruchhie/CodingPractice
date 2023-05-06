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



*/
UINT CountONBits(UINT iNo)
{
    UINT iMask=0;
    UINT iCount=0;

    iMask=0X00000001;

    while(iMask!=0X80000000)
    {
        if((iMask&iNo)==iMask)
            iCount++;

        iMask=iMask<<1;
    }

    return iCount;

}

int main()
{
    UINT iValue=0;
    UINT iRet=0;

    printf("Enter a number ");
    scanf("%d",&iValue);

    iRet = CountONBits(iValue);

    printf("ON Bits Count = %d \n",iRet);


    return 0;
}