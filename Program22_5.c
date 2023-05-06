
/*
ip irow=4 icol=4

op

1   2   3   4
1   *   *   4
1   *   *   4
1   2   3   4

*/


#include<stdio.h>

void Display(int iRow,int iCol)
{
    int i=0,j=0;

    for(i=1;i<=iRow;i++)
    {   
        for(j=1;j<=iCol;j++)
        {
            if( (i>1 && i<iRow) && (j>1 && j<iCol) )
                printf("*\t");
            else
                printf("%d\t",j);
            
        }
        printf("\n");
    }

}

int main()
{
    int iValue1=0,iValue2=0;

    printf("Enter no of rows and column:\t");
    scanf("%d%d",&iValue1,&iValue2);

    Display(iValue1,iValue2);

    return 0;
}