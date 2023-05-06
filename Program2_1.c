//Assignment 2 Q1. accept one no. and print *


#include<stdio.h>

void DisplayP(int iCount,int iLines)
{
    int iIndex=0;
    int iIndex2=0;

    for(iIndex2=1;iIndex2<=iLines;iIndex2++)
    {

        for(iIndex=1;iIndex<=iCount;iIndex++)
        {
            printf("* ");
        }

        printf("\n");

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