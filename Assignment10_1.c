//area of circle

#include<stdio.h>
#define PI 3.14

double CircleArea(float fRadius)
{
    // double dArea=0.0;
    // dArea=PI * fRadius * fRadius ;
    // return dArea;

    return PI * fRadius * fRadius ;
}

int main()
{
    float fRadius=0.0;
    double dRet=0.0;

    printf("Enter the radius\t:");
    scanf("%f",&fRadius);

    dRet=CircleArea(fRadius);

    printf("Area of circle is %.4lf",dRet);

    return 0;
}