//accept no and display its digit in reverse order
//Time COmplexity=O(no of digits in number)

#include<stdio.h>

void DisplayDigit(int iNo)
{
    int iRev=0;

    if(iNo<0)
        iNo=-iNo;
    
    while(iNo!=0)
    {
        iRev=iNo%10;
        printf("%d\n",iRev);
        iNo=iNo/10;
    }
}

int main()
{
    int iValue=0;

    printf("Enter a number:");
    scanf("%d",&iValue);

    DisplayDigit(iValue);

    return 0;
}
