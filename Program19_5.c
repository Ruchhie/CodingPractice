/*
ip iRow=4 iCol=5
op
1   1   1   1   1
2   2   2   2   2
3   3   3   3   3
4   4   4   4   4

*/
#include<stdio.h>

void Display(int iRow,int iCol)
{
    int i=0,j=0,iNo=1;

    for(i=1;i<=iRow;i++)
    {
        for(j=1;j<=iCol;j++)
        {
            printf("%d\t",iNo);
        }
        iNo++;
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