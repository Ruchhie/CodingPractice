//accept n and print first 5 multiples of N
//Time Complexity = O(n)

#include<stdio.h>

void Display(int iVal)
{
    int iCnt=0;

    for(iCnt=1;iCnt<=5;iCnt++)
    {   
        printf("%d\t",iVal*iCnt);
    }

}

int main()
{
    int iNo=0;

    printf("Enter number:\t");
    scanf("%d",&iNo);

    Display(iNo);
}