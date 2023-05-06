//ip 5 op A B C D E

#include<stdio.h>

void Display(int iNo)
{
    char ch='A';
    int iCnt=0;

    if(iNo<0)
        iNo=-iNo;

    for(iCnt=0;iCnt<iNo;iCnt++)
    {
        printf("%c\t",ch);
        ch++;
    }

}

int main()
{
    int iValue=0;

    printf("Enter a number:\t");
    scanf("%d",&iValue);

    Display(iValue);

    return 0;
}