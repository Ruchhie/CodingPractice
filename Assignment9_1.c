//pattern print
//Time Complexity=O(2n)

#include<stdio.h>

void pattern(int iNo)
{
    int iCnt=0;

    if(iNo<0)
        iNo=-iNo;

    for(iCnt=1;iCnt<=iNo;iCnt++)
        printf(" * ");

    for(iCnt=1;iCnt<=iNo;iCnt++)
        printf(" # ");    
}
int main()
{
    int iNo=0;

    printf("Enter Number\t:");
    scanf("%d",&iNo);

    pattern(iNo);

    return 0;
}