//string count white spaces 

#include<stdio.h>

int CountSpace(char *str)
{
    int iCnt=0;

    while(*str != '\0')
    { 
        if(*str==' ' )        
            iCnt++;
        
        str++;
    }

    return iCnt;
}
int main()
{
    char Arr[20];
    char ch='\0';

    int iRet=0;

    printf("Please enter string\t:");
    scanf("%[^'\n']s",Arr);

    iRet=CountSpace(Arr);

    printf("No of White Space in  %s is: %d\n",Arr,iRet);
    return 0;
}