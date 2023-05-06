//Accept String and accept one char. Count no of that char in string

#include<stdio.h>
#include<stdbool.h>

bool CheckChar(char *str,char ch)
{
    while(*str != '\0')
    { 
        if(*str==ch )        
            break;
       
        str++;
    }

    if(*str=='\0')
        return false;
    else 
        return true;
}
int main()
{
    char Arr[20];
    char ch='\0';

    bool bRet=false;

    printf("Please enter string\t:");
    scanf("%[^'\n']s",Arr);

    printf("Enter a character to check occurence:");
    scanf(" %c",&ch);         //Solution 1
    //fflush(stdin);            //stdlib need to add header

    bRet=CheckChar(Arr,ch);

    if(bRet==false)
        printf("FALSE");
    else    
        printf("TRUE");
    return 0;
}