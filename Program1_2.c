//Assignment1 Q.2 Program to print five times MARVELLOUS.

#include<stdio.h>
void Display(int iN, char str[])
{
    int iCnt=0;

    for(iCnt=1;iCnt<=iN;iCnt++)
    {
        printf("%s %d\n",str,iCnt);
    }
}

int main()
{
    int iNo=0;
    char str[100];

    printf("Enter what you want to display\t:");
    scanf("%[^\n]s",str);

    printf("Enter how many times you want to see %s :",str);
    scanf("%d",&iNo);

    Display(iNo,str);
}