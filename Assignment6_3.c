//accept 2 no's and check whether numbers are equal or not.

#include<stdio.h>
typedef int BOOL;
#define TRUE 1
#define FALSE 0

BOOL ChkEqual(int iNo1,int iNo2)
{
    if(iNo1==iNo2)
        return TRUE;
    else
        return FALSE;
}


int main()
{
    int iValue1=0,iValue2=0;
    BOOL bRet;

    printf("Please Enter 2 Numbers:\t");
    scanf("%d%d",&iValue1,&iValue2);

    bRet=ChkEqual(iValue1,iValue2);

    if(bRet==TRUE)
        printf("\nEQUAL");
    else 
        printf("\nNOT EQUAL");
    
    return 0;
}

