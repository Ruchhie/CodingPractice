//Assignment 3: Q4.Convert case

#include<stdio.h>
void DisplayConvert(char cValue)
{
    if(cValue >= 65 && cValue <= 90)        //upper case ASCII value is between 65 to 90
        printf("%c",(cValue+32));
    else if(cValue >= 97 && cValue <= 122)       //lower case ASCII value is between 97 to 122
        printf("%c",(cValue-32));
    
}

int main()
{
    char cValue='\0';
    printf("Enter Character\t:");
    scanf("%c",&cValue);

    DisplayConvert(cValue);
    return 0;
}
