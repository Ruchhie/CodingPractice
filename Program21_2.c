/*
ip iRow=4 iCol=5
op

2   4   6   8   10
1   3   5   7   9
2   4   6   8   10
1   3   5   7   9


*/


#include<stdio.h>

void Display(int iRow,int iCol)
{
    int i=0,j=0;
    int iNo=0,iNo1=0;

    for(i=1;i<=iRow;i++)
    {
        iNo=1;
        iNo1=2;

        for(j=1;j<=iCol;j++)
        {            
            if(i%2==1)
            {
                printf("%d\t",iNo1);
                iNo1=iNo1+2;                
            }
            else
            {
                printf("%d\t",iNo);
                iNo=iNo+2;
            }
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