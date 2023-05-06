//accept character and check alphabet capital or not.

#include<stdio.h>
#include<stdbool.h>

bool CheckChar(char ch)
{
    if( (ch>='A' && ch<='Z') )
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
        printf("%c is not a capital",ch);
    else
        printf("%c is a capital",ch);

    return 0;
}