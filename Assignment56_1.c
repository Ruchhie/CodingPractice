#include<stdio.h>

int SpaceCountR(char *str)
{
    static int iCount=0;

    // while(*str!='\0')        without recursion
    // {
    //     iCount++;
    //     str++;
    // }

    if(*str!='\0')
    {
        if(*str==' ')
            iCount++;
        str++;
        SpaceCountR(str);
    }

    return iCount;
}


int main()
{

    char Arr[20];
    int iRet=0;

    printf("Enter String :");
    scanf("%[^'\n']s",Arr);

    iRet=SpaceCountR(Arr);

    printf("Space Count=%d",iRet);

    return 0;

}