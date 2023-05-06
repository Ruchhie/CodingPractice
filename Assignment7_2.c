//acept no and print till that no ex8 op 1 2 3 4 5 6 7 8 
//Time Complexity = O(n)

#include<stdio.h>

void Display(int iVal)
{
    int iCnt=0;

    if(iVal<0)              //updator
        iVal=-iVal;

    for(iCnt=1;iCnt<=iVal;iCnt++)
        printf("%d\t",iCnt);
}

int main()
{
    int iNo=0;

    printf("Enter number:\t");
    scanf("%d",&iNo);

    Display(iNo);
}