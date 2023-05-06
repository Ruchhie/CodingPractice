//Assignment 3: Q3. Accept one no and print that even factors of that no

#include<stdio.h>

void DisplayFactor(int iNo)
{
    int i=0;

    if(iNo<=0)
    {
        iNo=-iNo;
    }

    for(i=1;i<=(iNo/2);i++)
    {
        if(( (iNo%i)==0) && (i%2==0) )
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