
//display range of numbers in reverse order
//Time Complexity= O(n)
#include<stdio.h>

void RangeDisplay(int iStart,int iEnd)
{   
    int iCnt=0;

    if(iEnd<iStart)
        printf("Invalid Range");
        
    for(iCnt=iEnd;iCnt>=iStart;iCnt--)
        printf("%d\t",iCnt);
}

int main()
{
    int iStart=0,iEnd=0;
    printf("Enter the starting no. and ending no.\t");
    scanf("%d%d",&iStart,&iEnd);

    RangeDisplay(iStart,iEnd);
    return 0;
}

