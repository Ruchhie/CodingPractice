/*
ip iRow=5 iCol=5
op

a   b   c   d   e
1   2   3   4   5
a   b   c   d   e
1   2   3   4   5
a   b   c   d   e


*/


#include<stdio.h>

void Display(int iRow,int iCol)
{
    int i=0,j=0;
    int iNo=0;
    char ch='a';

    for(i=1;i<=iRow;i++)
    {
        iNo=1;
        ch='a';

        for(j=1;j<=iCol;j++)
        {            
            if(i%2==1)
            {
                printf("%c\t",ch);
                ch++;                
            }
            else
            {
                printf("%d\t",iNo);
                iNo++;
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