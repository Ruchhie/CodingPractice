//Assignment 4: Q5.Check given char vowel or not

#include<stdio.h>

typedef int BOOL;
#define TRUE 1
#define FALSE 0

BOOL ChkVowel(char cValue)
{
    if(cValue=='a' || cValue=='e' || cValue=='i' || cValue=='o' || cValue=='u' 
    || cValue=='A' || cValue=='E' || cValue=='I' || cValue=='O' || cValue=='U') 
        return TRUE;
    else    
        return FALSE;
}

int main()
{
    char cData='\0';
    BOOL bRet=FALSE;

    printf("Enter Character\t:");
    scanf("%c",&cData);

    bRet=ChkVowel(cData);

    if(bRet==TRUE)
        printf("\n%c is a VOWEL",cData);
    else
        printf("\n%c is not a VOWEL",cData);

}