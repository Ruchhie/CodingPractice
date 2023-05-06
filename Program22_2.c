/*

ip iRow=4 iCol=4
op
*   *   *   *
*   *   *   #
*   *   #   #
*   #   #   #

*/

#include<stdio.h>

void Display(int iRow,int iCol)
{
    int i=0,j=0;
    int iNo=1;

    for(i=1;i<=iRow;i++)
    {   
        for(j=iCol;j>=1;j--)
        {
            if(j>=i)
                printf("*\t");
            else
                printf("#\t");
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