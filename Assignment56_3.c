#include<stdio.h>

int SmallCountR(char *str)
{
    static int iCount=0;

    // while(*str!='\0')        without recursion
    // {
    //     iCount++;
    //     str++;
    // }

    if(*str!='\0')
    {
        if(*str>='a' && *str<='z')
            iCount++;
        str++;
        SmallCountR(str);
    }

    return iCount;
}


int main()
{

    char Arr[20];
    int iRet=0;

    printf("Enter String :");
    scanf("%[^'\n']s",Arr);

    iRet=SmallCountR(Arr);

    printf("Small Count=%d",iRet);

    return 0;

}