//ASCII Table

#include<stdio.h>

void DisplayASCII()
{
char ch='\0';
int iCnt=0;
printf("\n--------ASCII TABLE--------");

for(iCnt=0;iCnt<=127;iCnt++)
    printf("\n%c\t%d\t%x\t%o",iCnt,iCnt,iCnt,iCnt);
    
printf("\n---------------------------");
}

int main()
{
    DisplayASCII();
    return 0;
}