//Assignment 2 Q4. accept two no. display first number second no of times

#include<stdio.h>

void Display(int iNo,int iFreq)
{
    int iIndex=0;

       for(iIndex=1;iIndex<=iFreq;iIndex++)
        {
            printf("%d\t",iNo);
        }

}

int main()
{
    int iFirst=0;
    int iSecond=0;

    printf("Enter the number you want to display\t:");
    scanf("%d",&iFirst);

    printf("Enter the number of times you want to display %d\t:",iFirst);
    scanf("%d",&iSecond);

    Display(iFirst,iSecond);

    return 0;
}