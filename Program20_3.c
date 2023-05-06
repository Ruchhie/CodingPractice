/*
ip iRow 3   iCol 4
op
A   A   A   A
B   B   B   B
C   C   C   C

*/

#include<stdio.h>

void Display(int iRow,int iCol)
{
    int i=0,j=0;
    char ch='A';

    for(i=0;i<iRow;i++)
    {
        for(j=0;j<iCol;j++)
        {
            printf("%c\t",ch);
        }
        ch++;        
        printf("\n");
    }

}

int main()
{
    int iValue1=0,iValue2=0;

    printf("Enter Rows and Columnns:\n");
    scanf("%d%d",&iValue1,&iValue2);

    Display(iValue1,iValue2);

    return 0;
}