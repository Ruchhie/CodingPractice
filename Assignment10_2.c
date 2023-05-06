//area of rectangle


#include<stdio.h>

double RectArea(float fWidth,float fHeight)
{
    //double dArea=0.0
    // dArea=fWidth*fHeight;
    // return dArea;
    
    return fWidth * fHeight ;
}

int main()
{
    float fValue1=0.0,fValue2=0.0;
    double dRet=0.0;

    printf("Enter the width and height\t:");
    scanf("%f%f",&fValue1,&fValue2);

    dRet=RectArea(fValue1,fValue2);

    printf("Area of Rectangle is %.3lf",dRet);

    return 0;
}