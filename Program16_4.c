//Last Occurrence accept N numbers and range, and display all elements from that range

#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

void Display(int Arr[],int iSize,int iStart,int iEnd)
{
    int iCnt=0;
    int iPos=-1;

    for(iCnt=0;iCnt<iSize;iCnt++)
    {
        if(Arr[iCnt] >= iStart && Arr[iCnt] <= iEnd ) 
         {
            printf("\t%d",Arr[iCnt]);
         }   
    }

}


int main()
{
    int *p=NULL;
    int iSize=0,iCnt=0,iValue1=0,iValue2;

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

    printf("Enter the range you want start and end no:\t");
    scanf("%d%d",&iValue1,&iValue2);

    Display(p,iSize,iValue1,iValue2);

    free(p);
    return 0;
}