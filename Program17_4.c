//accept n no and displlay all such no which contains 3 digits

#include<stdio.h>
#include<stdlib.h>

void Display(int Arr[],int iSize)
{
    int iCountDigit=0,iCnt=0,iNo=0;

    for(iCnt=0;iCnt<iSize;iCnt++)
    {
        iNo=Arr[iCnt];

        while(iNo!=0)
        {
            // iDigit=iNo%10;
            iCountDigit++;
            iNo=iNo/10;
        }

        if(iCountDigit==3)
            printf("%d\t",Arr[iCnt]);

        iCountDigit=0;          
    }

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

    printf("Enter %d elements\n",iSize);
    for(iCnt=0;iCnt<iSize;iCnt++)
    {
        printf("Enter element : %d =\t",iCnt+1);
        scanf("%d",&p[iCnt]);
    }

    Display(p,iSize);

    free(p);

    return 0;
}