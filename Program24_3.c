//accept character and print following

#include<stdio.h>
#include<stdbool.h>

bool CheckChar(char ch)
{
    char cCnt='\0';

    if (ch>='A' && ch<='Z') 
    {
        for(cCnt=ch;cCnt<='Z';cCnt++)
        {
            printf("%c\t",cCnt);
        }
    }        
    else if( ch>='a' && ch<='z') 
    {
        for(cCnt=ch;cCnt>='a';cCnt--)
        {
            printf("%c\t",cCnt);
        }
    }  
   
}

int main()
{
    char ch='\0';

    printf("Enter character:\t");
    scanf("%c",&ch);

    CheckChar(ch);
    return 0;
}