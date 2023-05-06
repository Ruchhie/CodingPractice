#include<stdio.h>

int StrlenR(char *str)
{
    static int iCount=0;

    // while(*str!='\0')        without recursion
    // {
    //     iCount++;
    //     str++;
    // }

    if(*str!='\0')
    {
        iCount++;
        str++;
        StrlenR(str);
    }

    return iCount;
}


int main()
{

    char Arr[20];
    int iRet=0;

    printf("Enter String :");
    scanf("%[^'\n']s",Arr);

    iRet=StrlenR(Arr);

    printf("String Length=%d",iRet);

    return 0;

}