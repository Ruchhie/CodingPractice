//degree convert 


#include<stdio.h>

double FHtoCS(float fNo)
{
    double dConvert=0.0;
    dConvert=((fNo-32)*5)/9;
    return dConvert;

    // return  (fNo-32) * (5/9) ;
 
}

int main()
{
    float fValue=0.0;
    double dRet=0.0;

    printf("Enter the temperature in Fahrenheit:\t");
    scanf("%f",&fValue);

    dRet=FHtoCS(fValue);

    printf("Temperature in celsius is:\n %.4f Fahrenheit = %.4f Celsius",fValue,dRet);

    return 0;
}