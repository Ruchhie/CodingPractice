#include<stdio.h>

void Display(int iNo)
{
    if(iNo>=1)
    {
        printf("%d\t*\t",iNo--);
        
        Display(iNo);
    }

}

int main()
{
    int iNo=0;
    printf("Enter a Number : ");
    scanf("%d",&iNo);

    Display(iNo);
    return 0;
}