//display only digits from strings

#include<stdio.h>

void DisplayDigit(char *str)
{
    while(*str!='\0')
    {
        if(*str>='0' && *str<='9')
             printf("%c",*str);

        str++;
    }
}

int main()
{
    char Arr[30];
    printf("Enter a string:\t");
    scanf("%[^'\n']s",Arr);

    DisplayDigit(Arr);

    return 0;
}