//Assignment 2 Q2. accept one no. and print * using while


#include<stdio.h>

void DisplayP(int iCount,int iLines)
{
    int iIndex=0;
    int iIndex2=0;

    iIndex2=1;
    while(iIndex2<=iLines)
    {
        iIndex=1;
        while(iIndex<=iCount)
        {
            printf("* ");
            iIndex++;
        }

    printf("\n");
    iIndex2++;
    }
}

int main()
{
    int iCount=0;
    int iLines=0;

    printf("Enter the number of stars you want\t:");
    scanf("%d",&iCount);

    printf("Enter the number of lines you want star\t:");
    scanf("%d",&iLines);

    DisplayP(iCount,iLines);

    return 0;
}