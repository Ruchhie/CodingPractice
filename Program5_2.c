//Assignment 4: Q2. Factors of descending order
//Time Complexity=O(n/2)

#include<stdio.h>

void FactRev(int iNo)
{
    int iCnt=0;
        
    for(iCnt=(iNo/2) ; iCnt>=1 ; iCnt-- )
    {
        if( (iNo%iCnt) == 0 )
            printf("%d\t",iCnt);
    }
}

int main()
{
    int iData=0;

    printf("Enter number:\t");
    scanf("%d",&iData);

    FactRev(iData);
}