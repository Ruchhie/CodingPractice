//accept n and print all odd no's upto
//Time Complexity = O(n/2)

#include<stdio.h>

void Display(int iVal)
{
    int iCnt=0;

    for(iCnt=1;iCnt<=iVal;iCnt=iCnt+2)
    {   
        printf("%d\t",iCnt);
    }

    // for(iCnt=1;iCnt<=iVal;iCnt++)
    // {   
    //     if(iCnt%2==1)
    //     printf("%d\t",iCnt);
    // }
}

int main()
{
    int iNo=0;

    printf("Enter number:\t");
    scanf("%d",&iNo);

    Display(iNo);
}