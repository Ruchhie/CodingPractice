/*
ip iRow 3   iCol 4
op

1   2   3   4   
5   6   7   8
9   10  11  12

*/

#include<stdio.h>

void Display(int iRow,int iCol)
{
    int i=0,j=0;
    int iNo=1;

    for(i=1;i<=iRow;i++)
    {
        for(j=1;j<=iCol;j++)
        {
            printf("%d\t",iNo);
            iNo++;
        }
              
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