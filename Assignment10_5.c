//sq.ft to sq.m

#include<stdio.h>

double convert(int iNo)
{
    double dConvert=0.0;
    dConvert=(double)iNo*0.0929 ;
    return dConvert;

}

int main()
{
    int isqf=0;
    double dRet=0.0;

    printf("Enter the distance in square feet:\t");
    scanf("%d",&isqf);

    dRet=convert(isqf);

    printf("distance in square meter is:\n %d sq.ft = %.6f sq.m",isqf,dRet);

    return 0;
}