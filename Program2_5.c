//Assignment2 Q.5 Even or ODD

#include<stdio.h>

typedef int BOOL;
#define TRUE 1
#define FALSE 0

BOOL Check(int iNo)
{
    if((iNo%2)==0)
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
        printf("%d is EVEN\n",iNo);
    else    
        printf("%d is ODD\n",iNo);

    return 0;
}