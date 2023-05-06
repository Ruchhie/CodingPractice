//accept N numbers and return difference of frequency of even and odd numbers

#include<stdio.h>
#include<stdlib.h>

int Frequency(int Arr[],int iSize)
{
    int iEvenFreq=0,iOddFreq=0,iCnt=0;

    for(iCnt=0;iCnt<iSize;iCnt++)
    {
        if(Arr[iCnt]%2==0)
            iEvenFreq++;
        else
            iOddFreq++;
    }

    return iEvenFreq-iOddFreq;
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
    
    printf("Difference = %d",iRet);

    free(p);

    return 0;
}