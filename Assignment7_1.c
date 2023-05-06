//accept no and print that many $* ex:3 $ * $ * $ *
//Time Complexity = O(n)
#include<stdio.h>

void Display(int iVal)
{
    int iCnt=0;

    if(iVal<0)              //updator
        iVal=-iVal;

    for(iCnt=1;iCnt<=iVal;iCnt++)
        printf(" $ * ");
}

int main()
{
    int iNo=0;

    printf("Enter number:\t");
    scanf("%d",&iNo);

    Display(iNo);
}