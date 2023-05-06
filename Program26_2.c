//String Upper case

#include<stdio.h>

void StrUprX(char *str)
{
    while(*str!='\0')
    {
        if(*str>='a' && *str<='z')
             *str=*str-32;

        str++;
    }
}

int main()
{
    char Arr[30];
    printf("Enter a string:\t");
    scanf("%[^'\n']s",Arr);

    StrUprX(Arr);

    printf("String after conversion is: %s\n",Arr);

    return 0;
}