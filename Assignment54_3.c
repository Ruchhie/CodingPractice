
#include<stdio.h>

void DisplayR(int iCount)
{

    if(iCount>=1)
    {
        printf("%d\t",iCount);
        iCount--;
        DisplayR(iCount);
    }   
}
int main()
{
    int Value=0;
    
    printf("Enter Number : ");
    scanf("%d",&Value);
    
    DisplayR(Value);
    return 0;
}