#include<stdio.h>

int Reverse(int iNo)
{
    static int iRev=0;

    int iDigit=0;

    if(iNo!=0)
    {
        iDigit=iNo%10;

        iRev=(iRev*10)+iDigit;

        iNo=iNo/10;

        Reverse(iNo);
    }
    

    return iRev;

}

int main()
{
    int iNo=0,iRet=0;
    printf("Enter a Number : ");
    scanf("%d",&iNo);

    iRet=Reverse(iNo);

    printf("Reverse No=%d",iRet);

    return 0;
}