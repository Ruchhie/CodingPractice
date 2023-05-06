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
void CountCommonBits(UINT iNo1,UINT iNo2)
{
    UINT iMask=0;
    UINT iBit=1;

    iMask=0X00000001;


    printf("Common Bits = ");
    while(iMask!=0X80000000)
    {
        if(((iMask&iNo1)==iMask) && ((iMask&iNo1)==iMask))
            printf("%d\t",iBit);
        iBit++;
        iMask=iMask<<1;
    }

}

int main()
{
    UINT iValue1=0,iValue2=0;
    
    printf("Enter 2 numbers ");
    scanf("%d%d",&iValue1,&iValue2);

    CountCommonBits(iValue1,iValue2);

    return 0;
}