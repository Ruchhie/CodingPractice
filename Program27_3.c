//Accept string and return first occurence of thatchar

#include<stdio.h>


int FirstOccurence(char *str,char ch)
{ 
    int iIndex=0;

    while(*str != '\0')
    {
        if(*str==ch )   
        {     
            break;
        }
        str++;
        iIndex++;
    }

    if(*str=='\0')
        return -1;
    else
        return iIndex;
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
    

    iRet=FirstOccurence(Arr,ch);

    if(iRet == -1)
        printf("Character %c not present in string %s",ch,Arr);
    else
        printf("Character %c present in string %s at Index %d",ch,Arr,iRet);
    return 0;
}