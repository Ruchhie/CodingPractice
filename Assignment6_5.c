//accept total marks and obtained marks and calc percentage

#include<stdio.h>

float Percentage(int iTotal,int iObtained)
{
    float fPer=0.0;

    if(iTotal==0)           
        return 0;

    else if(iObtained>iTotal)       v
        return -1;
    
    fPer=(float)iObtained/(float)iTotal*100 ;

    return fPer;
}

int main()
{
    int iTotal=0,iObtained=0;
    float fRet=0.0;

    printf("Enter total marks and obtained marks:\t");
    scanf("%d%d",&iTotal,&iObtained);

    fRet=Percentage(iTotal,iObtained);

    if(fRet==0)
        printf("INVALID INPUT...Number cant divide by 0");
    if(fRet==-1)
        printf("INVALID INPUT...Obtained marks can't be greater than total marks ");
    else 
        printf("Percentage is %.2f",fRet);

    return 0;
}