
#include<stdio.h>

void DisplayR(int iNo)
{
    
    static int iCount=1;
    
    if(iCount<=iNo)
    {
        printf("*\t");
        iCount++;
        DisplayR(iNo);
    }   
}
int main()
{
    int iNo=0;
    printf("Enter Number :");
    scanf("%d",&iNo);
    DisplayR(iNo);
    return 0;
}