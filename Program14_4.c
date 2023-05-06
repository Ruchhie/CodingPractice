//accept N numbers and display all elements which are divisible by 3 and 5


#include<stdio.h>
#include<stdlib.h>

void DisplayDivisible(int Arr[],int iSize)
{
    int iCnt=0;

    for(iCnt=0;iCnt<iSize;iCnt++)
    {
        if(Arr[iCnt]%3==0 && Arr[iCnt]%5==0)
            printf("%d\t",Arr[iCnt]);
    }
}

int main()
{
    int *p=NULL,iNo=0,iCnt=0;

    printf("Enter total number of elements");
    scanf("%d",&iNo);

    p=(int *)malloc(iNo*sizeof(int));

    if(p==NULL)
    {
        printf("Unable to allocate memory");
        return -1;
    }

    printf("Enter %d elements\n",iNo);

    for(iCnt=0;iCnt<iNo;iCnt++)
    {
        scanf("%d",&p[iCnt]);
    }
    printf("Elements Even and Divisible by 5 are:\n");
    DisplayDivisible(p,iNo);

    free(p);

    return 0;
}
