//ip 8 op 2 4 6 8 10 12 14 16

#include<stdio.h>

void Display(int iNo)
{
    int iCnt=0;

    if(iNo<0)
        iNo=-iNo;

    for(iCnt=1;iCnt<=iNo;iCnt++)
    {
        printf("%d\t",2*iCnt);
    }

}

int main()
{
    int iValue=0;

    printf("Enter a number:\t");
    scanf("%d",&iValue);

    Display(iValue);

    return 0;
}