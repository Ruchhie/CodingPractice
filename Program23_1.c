//accept character and check alphabet or not.

#include<stdio.h>
#include<stdbool.h>

bool CheckChar(char ch)
{
    if( (ch>='A' && ch<='Z') ||( ch>='a' && ch<='z') )
        return true;
    else
        return false;
}

int main()
{
    bool bRet=false;
    char ch='\0';

    printf("Enter character:\t");
    scanf("%c",&ch);

    bRet=CheckChar(ch);

    if(bRet==false)
        printf("%c is not a character",ch);
    else
        printf("%c is a character",ch);

    return 0;
}