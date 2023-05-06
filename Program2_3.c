//Assignment 2 Q3. accept one no. if no less than 10 print hello else print demo

#include<stdio.h>

void Display(int iData)
{
    if(iData<10)
        printf("Hello");
    else    
        printf("Demo");
}

int main()
{
    int iNo=0;

    printf("Enter Value\t:");
    scanf("%d",&iNo);

    Display(iNo);
    return 0;
}