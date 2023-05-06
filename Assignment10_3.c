//km to m

#include<stdio.h>

float KMtoM(float fKM)
{
    // float fConvert=0.0;
    // fConvert=fKM*1000;
    // return fConvert;

    return fKM*1000 ;
}

int main()
{
    float fKM=0.0;
    float fRet=0.0;

    printf("Enter the distance in KM:\t");
    scanf("%f",&fKM);

    fRet=KMtoM(fKM);

    printf("distance in meter is:\n %.2f km = %.2f m",fKM,fRet);

    return 0;
}