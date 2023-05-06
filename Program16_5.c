//First Occurrence accept N numbers and return product of all odd elements

#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

int OddMult(int Arr[],int iSize)
{
    int iCnt=0,iRes=1;

    for(iCnt=0;iCnt<iSize;iCnt++)
    {
        if(Arr[iCnt]%2 == 1) 
            iRes=iRes*Arr[iCnt];
    }
    
    if(iRes==1)
        return 0;

    return iRes;
}


int main()
{
    int *p=NULL;
    int iRet=0;
    int iSize=0,iCnt=0;

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

    iRet=OddMult(p,iSize);

    printf("Result=%d",iRet);

    free(p);
    
    return 0;
}