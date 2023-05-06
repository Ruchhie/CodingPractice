//accept N numbers and return frequency of NO

#include<stdio.h>
#include<stdlib.h>

int Frequency(int Arr[],int iSize,int iNo)
{
    int iFreq=0,iCnt=0;

    for(iCnt=0;iCnt<iSize;iCnt++)
    {
        if(Arr[iCnt]==iNo)
            iFreq++;
    }

    return iFreq;
}

int main()
{
    int *p=NULL;
    int iCnt=0,iRet=0,iSize=0;
    int iValue=0;

    printf("Enter toltal elements\t");
    scanf("%d",&iSize);

    p=(int *) malloc(iSize * sizeof(int) );

    for(iCnt=0;iCnt<iSize;iCnt++)
    {
        printf("Enter element %d = \t",iCnt+1);
        scanf("%d",&p[iCnt]);
    }

    printf("Enter the value's frequency you want to check\t");
    scanf("%d",&iValue);

    iRet=Frequency(p,iSize,iValue);

    printf("%d number occurred %d times",iValue,iRet);

    free(p);

    return 0;
}