
#include<stdio.h>

// void Display()
// {
//     int iNo=0;
//     printf("Enter Number :");
//     scanf("%d",&iNo);

//     for(int i=0;i<iNo;i++)
//         printf("*\t");

// }

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