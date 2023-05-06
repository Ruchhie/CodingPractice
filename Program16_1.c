//accept N no and check whether no present or not

#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

bool CheckFreq(int Arr[],int iSize,int iNo)
{
    int iCnt=0;

    for(iCnt=0;iCnt<iSize;iCnt++)
    {
        if(Arr[iCnt] == iNo) 
            break;
    }

    if(iCnt==iSize)
        return false;
    else
        return true;
}


int main()
{
    int *p=NULL;
    bool bRet=false;
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

    bRet=CheckFreq(p,iSize,iValue);

    if(bRet==false)
        printf("FALSE,Value absent",bRet);
    else 
        printf("TRUE,Value present",bRet);


    free(p);
    
    return 0;
}