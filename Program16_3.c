//Last Occurrence accept N numbers and accept NO return index of first occurrence of that NO.

#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

int CheckFreq(int Arr[],int iSize,int iNo)
{
    int iCnt=0;
    int iPos=-1;
//Logic 1:

    // for(iCnt=0;iCnt<iSize;iCnt++)
    // {
    //     if(Arr[iCnt] == iNo) 
    //      {
    //         iPos=iCnt;
    //      }   
    // }

    // return iPos;

//Logic 2:

    for(iCnt=iSize-1; iCnt>=0; iCnt--)
    {
        if(Arr[iCnt]== iNo)
            break;
    }

    // if(iCnt==-1)
    //     return -1;
    // else    
    //     return iCnt;

    return iCnt;
}


int main()
{
    int *p=NULL;
    int iRet=0;
    int iSize=0,iCnt=0,iValue=0;

    printf("Enter total elements:\t");
    scanf("%d",&iSize);

    p=(int *) malloc(iSize * sizeof(int) );

    if(p==NULL)
    {
        printf("Memory allocation failed");
        return -1;
    }

    printf("Enter elements:\n");
    for(iCnt=0;iCnt<iSize;iCnt++)
    {
        printf("Enter Element %d=\t",iCnt+1);
        scanf("%d",&p[iCnt]);
    }

    printf("Enter the value for which you want to check frequency:\t");
    scanf("%d",&iValue);

    iRet=CheckFreq(p,iSize,iValue);

    if(iRet==-1)
        printf("%d not present\n",iValue);
    else 
        printf("%d present at index %d",iValue,iRet);

    free(p);
    return 0;
}