//accept character and change case of alphabet 

#include<stdio.h>

void CheckChar(char ch)
{
    if (ch>='A' && ch<='Z') 
        printf("%c",ch+32);
    else if( ch>='a' && ch<='z') 
        printf("%c",ch-32);
    else    
        printf("%c",ch);
}

int main()
{
    char ch='\0';

    printf("Enter character:\t");
    scanf("%c",&ch);

    CheckChar(ch);
    return 0;
}