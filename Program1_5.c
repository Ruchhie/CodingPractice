//Assignment1 Q.5 Accept no and print that much *

#include<stdio.h>
void Display(int iCount)
{
    int iIndex=0;

    for(iIndex=1;iIndex<=iCount;iIndex++)
    {
        printf("* ");
    }
}

int main()
{
    int iCount=0;

    printf("Enter the number of stars you want\t:");
    scanf("%d",&iCount);
    Display(iCount);
    return 0;
}