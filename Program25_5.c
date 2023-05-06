//Reverse

#include<stdio.h>
#include<stdbool.h>

void ReverseX(char *str)
{
    char *start=NULL;
    char *end=NULL;
    char temp='\0';

    start=str;
    end=str;

    while(*end!='\0')
        end++;
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
    char arr[20];

    printf("Enter string:\t");
    scanf("%[^'\n']s",arr);

    ReverseX(arr);

    printf("Reverse String: %s",arr);

    return 0;
}