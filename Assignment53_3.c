
#include<stdio.h>

// void Display()
// {
//     int iNo=0;
//     printf("Enter Number :");
//     scanf("%d",&iNo);

//     for(int i=iNo;i>=1;i--)
//         printf("i\t");

// }

void DisplayR()
{
    
    static int iCount=5;
    
    if(iCount>=1)
    {
        printf("%d\t",iCount);
        iCount--;
        DisplayR();
    }   
}
int main()
{
    
    DisplayR();
    return 0;
}