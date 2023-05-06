//Reverse

#include<stdio.h>

void StrRevX(char *str)
{
    char *start=str;
    char *end=str;
    char temp='\0';

    // start=str;
    // end=str;

    while(*end!='\0')
    {
        end++;
    }
    end--;

    while(start<end)
    {
        temp=*start;
        *start=*end;
        *end=temp;

        start++;
        end--;
    }


}

int main()
{
    char str[20];

    printf("Enter a string:\t");

    scanf("%[^'\n']s",str);

    StrRevX(str);

    printf("Reverse String : %s",str);

    return 0;
}