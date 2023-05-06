//accept string and check vowel

#include<stdio.h>
#include<stdbool.h>

bool CheckVowel(char *str)
{
    while(*str!='\0')
    {
        if(*str=='a' || *str=='e'|| *str=='i'|| *str=='o'|| *str=='u'|| *str=='A'|| *str=='E'|| *str=='I'|| *str=='O'|| *str=='U')
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
    char arr[20];
    bool bRet=false;

    printf("Enter string:\t");
    scanf("%[^'\n']s",arr);

    bRet=CheckVowel(arr);

    if(bRet==false)
        printf("No Vowel");
    else
        printf("Contains Vowel");

    return 0;
}