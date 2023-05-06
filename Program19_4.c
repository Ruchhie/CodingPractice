/*
ip iRow=3 iCol=4
op
*   #   *   #
*   #   *   #
*   #   *   #

*/
#include<stdio.h>

void Display(int iRow,int iCol)
{
    int i=0,j=0;

    //This logic works when column no is even
    // for(i=1;i<=iRow;i++)
    // {
    //     for(j=1;j<=iCol/2;j++)
    //     {
    //         printf("*\t#\t");
    //     }
    //     printf("\n");
    // }

    //This logic works for any no of rows and columns
    
    for(i=1;i<=iRow;i++)        
    {
        for(j=1;j<=iCol;j++)
        {
            printf("*\t");
            j++;

            if(j<=iCol)
            printf("#\t");

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