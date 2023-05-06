//accept N numbers and return frequency of 11

#include<stdio.h>
#include<stdlib.h>

int Frequency(int Arr[],int iSize)
{
    int iFreq=0,iCnt=0;

    for(iCnt=0;iCnt<iSize;iCnt++)
    {
        if(Arr[iCnt]==11)
            iFreq++;
    }

    return iFreq;
}

int main()
{
    int *p=NULL;
    int iCnt=0,iRet=0,iSize=0;

    printf("Enter toltal elements\t");
    scanf("%d",&iSize);

    p=(int *) malloc(iSize * sizeof(int) );

    for(iCnt=0;iCnt<iSize;iCnt++)
    {
        printf("Enter element %d = \t",iCnt+1);
        scanf("%d",&p[iCnt]);
    }

    iRet=Frequency(p,iSize);

    printf("11 number occurred %d times",iRet);

    free(p);

    return 0;
}