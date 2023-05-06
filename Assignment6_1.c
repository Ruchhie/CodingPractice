//Q.1 Program which accepts name from user and print same 

#include<stdio.h>

int main()
{
    char name[30];
    printf("Enter full name:");
    
    scanf("%[^\n]s",name);

    printf("Your name is %s",name);

    return 0;
}

