/*

ip iRow=4 iCol=4
op
 1   2   3   4   5
-1  -2  -3  -4  -5
 1   2   3   4   5
-1  -2  -3  -4  -5
 1   2   3   4   5


*/


#include<stdio.h>

void Display(int iRow,int iCol)
{
    int i=0,j=0;
    int iNo=1;

    for(i=1;i<=iRow;i++)
    {   
        iNo=1;
        for(j=1;j<=iCol;j++)
        {
            if(i%2==1)
                printf(" %d\t",iNo);
            else
                printf("%d\t",-iNo);
            iNo++;

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