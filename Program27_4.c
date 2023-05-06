//Accept string and return last occurence of thatchar

#include<stdio.h>


int LastOccurence(char *str,char ch)
{ 
    int iIndex=0;
    int iRes=-1;

    while(*str != '\0')
    {
        if(*str==ch )   
        {     
            iRes=iIndex;
        }
        str++;
        iIndex++;
    }

    return iRes;
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
    

    iRet=LastOccurence(Arr,ch);

    if(iRet == -1)
        printf("Character %c not present in string %s",ch,Arr);
    else
        printf("Character %c present in string %s at Index %d",ch,Arr,iRet);
    return 0;
}