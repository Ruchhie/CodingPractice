//print number line ex 4 op -4 -3 -2 -1 0 1 2 3 4
//Time Complexity = O(2n+1)

#include<stdio.h>

void Display(int iVal)
{
    int iCnt=0;

    for(iCnt=-iVal;iCnt<=iVal;iCnt++)
        printf("%d\t",iCnt);
}

int main()
{
    int iNo=0;

    printf("Enter number:\t");
    scanf("%d",&iNo);

    Display(iNo);
}