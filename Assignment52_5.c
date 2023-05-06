//TOGGLE BETWEEN RANGE 

//  0000    0000    0000    0000    0000    0000    0000    0000

//RANGE : start=7   end=17

//ip:   0010  1010    1010    1110    1101    1010    0110    1101
//                               |    ||||    ||||    ||                     
//op:   0010  1010    1010    1111    0010    0101    1010    1101

//mask: 0000  0000    0000    0000    0001    1111    1100    0000

//BUT WILL NEED TO CREATE DYNAMIC MASK

//SOLUTION check ss P345
//0  0011 1000 0001
//1  1100 1000 0001

#include<stdio.h>
typedef unsigned int UINT;

UINT ToggleRange(UINT iNo,UINT Start,UINT End)
{
    UINT Mask1=0XFFFFFFFF;
    UINT Mask2=0XFFFFFFFF;
    UINT Mask=0;
    UINT Res=0;

    Mask1=Mask1<<(Start-1);
    Mask2=Mask2>>(32-End);

    Mask=Mask1 & Mask2;

    Res=iNo ^ Mask;

    return Res;
}


int main()
{
    UINT iValue=0;
    UINT i=0,j=0;
    UINT iRet=0;

    printf("Number = \n");
    scanf("%d",&iValue);
    printf("Range start = \n");
    scanf("%d",&i);
    printf("Range end = \n");
    scanf("%d",&j);

    iRet=ToggleRange(iValue,i,j);
    printf("Updated No = %d\n",iRet);

    return 0;
}