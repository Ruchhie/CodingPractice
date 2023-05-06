//Assignment1 Q.1 Program to divide two numbers

#include<stdio.h>

float Division(int iValue1,int iValue2)
{
    float fRes=0;

    if(iValue2==0)
        return -1;

    fRes=(float)iValue1/iValue2;

    return fRes;
}

int main()
{
    int iNo1=0;
    int iNo2=0;

    float fRet=0;

    printf("Enter two numbers to divide\t:");
    scanf("%d%d",&iNo1,&iNo2);

    fRet=Division(iNo1,iNo2);

    if(fRet==-1)
        printf("We cant divide number with zero\n");
    else
        printf("Division of two numbers is %.2f\n",fRet);
    
    return 0;
}