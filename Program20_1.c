/*
ip iRow 4   iCol 4
op

A   B   C   D
A   B   C   D
A   B   C   D
A   B   C   D

*/

#include<stdio.h>

void Display(int iRow,int iCol)
{
    int i=0,j=0;
    char ch='A';

    for(i=0;i<iRow;i++)
    {
        ch='A';
        for(j=0;j<iCol;j++)
        {
            printf("%c\t",ch);
            ch++;
        }
        
        printf("\n");
    }

}

/*
Q.
A
B   C
C   D   E
D   E   F   G

void Display(int iRow,int iCol)
{
    int i=0,j=0;
    char ch='A';
    char ch1='A';
    for(i=1;i<=iRow;i++)
    {
    
        for(j=1;j<=iCol;j++)
        {               
            if(i>=j)
            {
            printf("%c\t",ch);
            ch++;
            }
            
        }
        ch1++;
        ch=ch1;

        printf("\n");
    }

}
*/
int main()
{
    int iValue1=0,iValue2=0;

    printf("Enter Rows and Columnns:\n");
    scanf("%d%d",&iValue1,&iValue2);

    Display(iValue1,iValue2);

    return 0;
}