
#include<stdio.h>

void CheckDiv(char ch)
{
    if( ch=='A' || ch=='a' )
        printf("Your exam is at 7am");
    else if ( ch=='B' || ch=='b' )
        printf("Your exam is at 8:30am");
    else if ( ch=='C' || ch=='c' )
        printf("Your exam is at 9:20am");
    else if ( ch=='D' || ch=='d' )
        printf("Your exam is at 10:30am");
    else
        printf("Invalid division");
}

int main()
{
    char ch='\0';

    printf("Enter your Division:\t");
    scanf("%c",&ch);

    CheckDiv(ch);

    return 0;
}