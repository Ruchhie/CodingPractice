//Assignment 3: Q2. Accept one no and print that even factors of that no

#include<stdio.h>

void DisplayFactor(int iNo)
{
    int i=0;

    if(iNo<=0)
    {
        iNo=-iNo;
    }

    for(i=2;i<=(iNo/2);i=i+2)
    {
        if((iNo%i)==0)
            printf("%d\t",i);
    }
}

int main()
{

    int iValue=0;
    printf("Enter Value:\t");
    scanf("%d",&iValue);

    DisplayFactor(iValue);
    return 0;
}