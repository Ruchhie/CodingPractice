//Toggle ....capital to small in string & small to capital in string

#include<stdio.h>

void ToggleX(char *str)
{
    while(*str!='\0')
    {
        if(*str>='A' && *str<='Z')
             *str=*str+32;
        else if(*str>='a' && *str<='z')
             *str=*str-32;

        str++;
    }
}

int main()
{
    char Arr[30];
    printf("Enter a string:\t");
    scanf("%[^'\n']s",Arr);

    ToggleX(Arr);

    printf("String after conversion is: %s\n",Arr);

    return 0;
}