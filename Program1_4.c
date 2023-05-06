//Assignment1 Q.4 Divisible by 5 or not

#include<stdio.h>

typedef int BOOL;
#define TRUE 1
#define FALSE 0

BOOL Check(int iNo)
{
    if((iNo%5)==0)
        return TRUE;
    else
        return FALSE;

}


int main()
{
    int iNo=0;
    BOOL bRet=0;

    printf("Enter number\t:");
    scanf("%d",&iNo);

    bRet=Check(iNo);

    if(bRet==TRUE)
        printf("%d is divisible by 5\n",iNo);
    else    
        printf("%d is not divisible by 5\n",iNo);

    return 0;
}