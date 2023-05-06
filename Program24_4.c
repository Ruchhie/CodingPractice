//accept character and check special symbol or not

#include<stdio.h>
#include<stdbool.h>

bool CheckChar(char ch)
{
    char cCnt='\0';
    if (ch>='!' && ch<='*' ) 
        return true;
    else
        return false;
   
}

int main()
{
    char ch='\0';
    bool bRet=false;
    printf("Enter character:\t");
    scanf("%c",&ch);

    bRet=CheckChar(ch);

    if(bRet==false)
        printf("FALSE");
    else
        printf("TRUE");

    return 0;
}