//Accept one no from user and check whether that no. is greather than 100 or not.

#include<stdio.h>
typedef int BOOL;
#define TRUE 1
#define FALSE 0

BOOL ChkGreater(int iNo)
{
    if(iNo==100)
        return -1;
    else if(iNo>100)
        return TRUE;
    else
        return FALSE;
}


int main()
{
    int iValue=0;
    BOOL bRet=FALSE;

    printf("Please Enter Number:\t");
    scanf("%d",&iValue);

    bRet=ChkGreater(iValue);

    if(bRet==-1)
        printf("\nEqual");
    else if(bRet==TRUE)
        printf("\nGreater");
    else 
        printf("\nSmaller");
    
    return 0;
}

