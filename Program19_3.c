/*
ip iRow=4 iCol=5
op
5   4   3   2   1
5   4   3   2   1
5   4   3   2   1
5   4   3   2   1
*/
#include<stdio.h>

void Display(int iRow,int iCol)
{
    int i=0,j=0;

    for(i=1;i<=iRow;i++)
    {
        for(j=iCol;j>=1;j--)
        {
            printf("%d\t",j);
        }
        printf("\n");
    }

}

int main()
{
    int iValue1=0,iValue2=0;

    printf("Enter Row and Column:\t");
    scanf("%d%d",&iValue1, &iValue2);

    Display(iValue1,iValue2);

    return 0;
}