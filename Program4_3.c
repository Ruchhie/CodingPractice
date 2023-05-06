//Assignment 4: Q3. Display Non Factor
//Time Complexity=O(n-1)

#include<stdio.h>

void NonFact(int iNo)
{
    int iCnt=0;
        
    for(iCnt=1 ; iCnt<iNo; iCnt++ )
    {
        if( (iNo%iCnt) != 0 )
            printf("%d\t",iCnt);
    }
}

int main()
{
    int iData=0;

    printf("Enter number:\t");
    scanf("%d",&iData);

    NonFact(iData);
}