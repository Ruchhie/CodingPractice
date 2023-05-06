//ip 5 op # 1 * # 2 * # 3 * # 4 * # 5 *

#include<stdio.h>

void Display(int iNo)
{
    int iCnt=0;

    if(iNo<0)
        iNo=-iNo;

    for(iCnt=1;iCnt<=iNo;iCnt++)
    {
        printf("#\t%d\t*\t",iCnt);
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