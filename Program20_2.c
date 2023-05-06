/*
ip iRow 4   iCol 4
op

A   B   C   D
a   b   c   d
A   B   C   D
a   b   c   d

*/

#include<stdio.h>

void Display(int iRow,int iCol)
{
    int i=0,j=0;
    char ch1='A';
    char ch2='a';

    for(i=1;i<=iRow;i++)
    {
        ch1='A';
        ch2='a';

        for(j=1;j<=iCol;j++)
        {
            if(i%2==0)          //even rows will show small letters
            {
                printf("%c\t",ch2);
                ch2++;
            }
            else                //odd columns will show big letters
            {
                printf("%c\t",ch1);
                ch1++;
            }
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