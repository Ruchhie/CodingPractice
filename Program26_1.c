//String lower case ....String Upper

#include<stdio.h>

void StrLwrX(char *str)
{
    while(*str!='\0')
    {
        if(*str>='A' && *str<='Z')
             *str=*str+32;

        str++;
    }
}

int main()
{
    char Arr[30];
    printf("Enter a string:\t");
    scanf("%[^'\n']s",Arr);

    StrLwrX(Arr);

    printf("String after conversion is: %s\n",Arr);

    return 0;
}