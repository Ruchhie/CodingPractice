#include<stdio.h>

int CountSmall(char *str)
{
    int iCnt=0;

    while(*str!='\0')
    {
        if(*str>='a' && *str<='z')
            iCnt++;
        str++;
    }
    return iCnt;
}

int CountCapital(char *str)
{
    int iCnt=0;

    while(*str!='\0')
    {
        if(*str>='A' && *str<='Z')
            iCnt++;
        str++;
    }
    return iCnt;
}

int Difference(char *str)
{
    int iCapital=0,iSmall=0;
    iCapital=CountCapital(str);
    iSmall=CountSmall(str);
    return (iSmall-iCapital);

}

int main()
{
    char arr[20];
    int iRet=0;

    printf("Enter string:\t");
    scanf("%[^'\n']s",arr);

    iRet=Difference(arr);

    printf("Difference:%d",iRet);


    return 0;
}