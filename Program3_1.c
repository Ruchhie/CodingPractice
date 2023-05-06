//Assignment 3: Q1. Accept one no and print that many of even number

#include<stdio.h>

void Print(int iLimit)
{
int iNo=0;

if (iLimit<=0)
    return;

//LOGIC1..TOOK DOUBLE LIMIT FOR APPLYING CONDITION
for(iNo=2;iNo<=(2*iLimit);iNo=iNo+2)
{
    printf("%d\t",iNo);
}

//LOGIC2
printf("\nLOGIC 2:\n");
int iCounter=1;
iNo=2;

while(iCounter<=iLimit)
{
    
    if((iNo%2)==0)
    {
        printf("%d\t",iNo);
        iCounter++;
        iNo=iNo+2;    //optimized
    }
    //iNo++;
}

//LOGIC 3
printf("\nLOGIC 3:\n");
iCounter=0;

iNo=2;
for(iCounter=1;iCounter<=iLimit;iCounter++)
{
    if((iNo%2)==0)
    {
        printf("%d\t",iNo);
        iNo=iNo+2;    //optimized
    }
    //iNo++;
}


}

int main()
{

    int iCount=0;

    printf("Enter value\t:");
    scanf("%d",&iCount);

    Print(iCount);
}