//accept N numbers and check 11 present or not in array

#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

bool CheckNo(int Arr[],int iSize)
{
    int iCnt=0;

    for(iCnt=0;iCnt<iSize;iCnt++)
    {
        if(Arr[iCnt]==11)
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
    int iCnt=0,iSize=0;
    bool bRet=false;

    printf("Enter toltal elements\t");
    scanf("%d",&iSize);

    p=(int *) malloc(iSize * sizeof(int) );

    for(iCnt=0;iCnt<iSize;iCnt++)
    {
        printf("Enter element %d = \t",iCnt+1);
        scanf("%d",&p[iCnt]);
    }

    bRet=CheckNo(p,iSize);
    
    if(bRet==false)
        printf("\n11 is absent\n");
    else
        printf("\n11 is present\n");

    free(p);

    return 0;
}