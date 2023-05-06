//accept character and check alphabet small or not.

#include<stdio.h>
#include<stdbool.h>

bool CheckChar(char ch)
{
    if( (ch>='a' && ch<='z') )
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
        printf("%c is not a small case",ch);
    else
        printf("%c is a small case alphabet",ch);

    return 0;
}