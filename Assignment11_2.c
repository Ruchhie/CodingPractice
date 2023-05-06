
//display range of even numbers
//Time Complexity= O(n)
#include<stdio.h>

void RangeEvenDisplay(int iStart,int iEnd)
{   
    int iCnt=0;

    if(iEnd<iStart)
        printf("Invalid Range");
        
    for(iCnt=iStart;iCnt<=iEnd;iCnt++)
    {
        if(iCnt%2==0)
         {   
            printf("%d\t",iCnt);
         }
    }


}

int main()
{
    int iStart=0,iEnd=0;
    printf("Enter the starting no. and ending no.\t");
    scanf("%d%d",&iStart,&iEnd);

    RangeEvenDisplay(iStart,iEnd);
    return 0;
}

