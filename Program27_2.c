//Accept String and accept one char. Count no of that char in string

#include<stdio.h>

int CountFrequency(char *str,char ch)
{
    int iCnt=0;

    while(*str != '\0')
    { 
        if(*str==ch )        
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

    printf("Enter a character to check occurence:");
    scanf(" %c",&ch);         //Solution 1
    

    iRet=CountFrequency(Arr,ch);

    printf("Frequency of %c in %s is: %d\n",ch,Arr,iRet);
    return 0;
}