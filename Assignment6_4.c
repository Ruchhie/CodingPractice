//accept 3 no's and print its multiplication
#include<stdio.h>

int Multiply(int iData1,int iData2,int iData3)
{
    int iMul=0;

    iMul=iData1*iData2*iData3;
    return iMul;

}
int main()
{
    int iNo1=0,iNo2=0,iNo3=0;
    int iRet=0;

    printf("\nEnter three numbers for multiplication: ");
    scanf("%d%d%d",&iNo1,&iNo2,&iNo3);

    iRet=Multiply(iNo1,iNo2,iNo3);

    printf("Multiplication is %d",iRet);

    return 0;
}