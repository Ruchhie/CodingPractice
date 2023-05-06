//Smallest Number

//Accept N numbers and return smallest number

#include<stdio.h>
#include<stdlib.h>

int Minimum(int Arr[],int iSize)
{
    int iCnt=0,iMin=Arr[0];

    for( iCnt=0; iCnt<iSize ; iCnt++ )
    {
        if( iMin >  Arr[iCnt] )
            iMin= Arr[iCnt];
    }

    return iMin;
}

int main()
{
    int iSize=0,iRet=0,iCnt=0;

    int *p=NULL;

    printf("Enter number of elements");
    scanf("%d",&iSize);

    p=(int *) malloc ( iSize * sizeof(int) );

    if(p==NULL)
    {
        printf("Unable to allocate memory");
        return -1;
    }

    printf("Enter %d elements",iSize);
    for(iCnt=0;iCnt<iSize;iCnt++)
    {
        printf("Enter element : %d =\t",iCnt+1);
        scanf("%d",&p[iCnt]);
    }

    iRet=Minimum(p,iSize);

    printf("Smallest Number is %d",iRet);

    free(p);

    return 0;

}