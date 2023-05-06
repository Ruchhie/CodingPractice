//accept character and check digit or not.

#include<stdio.h>
#include<stdbool.h>

bool CheckChar(char ch)
{
    if( (ch>='0' && ch<='9') )
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
        printf("%c is not a digit",ch);
    else
        printf("%c is a digit",ch);

    return 0;
}