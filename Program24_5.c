//ASCII value

#include<stdio.h>

void DisplayASCII(char ch)
{
    printf("\n--------ASCII VALUE--------\n");

    printf("\nDECIMAL:\t%d\nOCTAL:\t\t%o\nHEXADECIMAL:\t%x\n",ch,ch,ch);
        
    printf("\n---------------------------");
}

int main()
{
    char ch='\0';
  
    printf("Enter character:\t");
    scanf("%c",&ch);
    DisplayASCII(ch);
    return 0;
}