//accpt no, no less than 50 print small, >50 & <100 print medium , >100 print large

#include<stdio.h>

void Number(int iNo)
{
    if(iNo<50)
        printf("Smaller");
    else if(iNo>50 && iNo<100)
        printf("Medium");
    else if(iNo>100)
        printf("Large");

}

int main()
{

    int iNo=0;

    printf("Enter number:\t");
    scanf("%d",&iNo);

    Number(iNo);

    return 0;
}