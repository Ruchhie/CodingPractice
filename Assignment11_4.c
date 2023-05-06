
//display range and return addition OF EVEN NO
//Time Complexity= O(n)

#include<stdio.h>

int RangeEvenAddDisplay(int iStart,int iEnd)
{   
    int iCnt=0;
    int iAdd=0;

    if(iEnd<iStart)
        return -1;
    
    if(iStart<0 || iEnd<0)
        return -1;
        
    for(iCnt=iStart;iCnt<=iEnd;iCnt++)
    {   
        if(iCnt%2==0)
            iAdd=iAdd+iCnt;            
    }

    return iAdd;
}

int main()
{
    int iStart=0,iEnd=0;
    int iRet=0;

    printf("Enter the starting no. and ending no.\t");
    scanf("%d%d",&iStart,&iEnd);

    iRet=RangeEvenAddDisplay(iStart,iEnd);

    if(iRet==-1)
        printf("Invalid Range");
    else      
        printf("Addition of range numbers is %d ",iRet);
      
    return 0;
}

