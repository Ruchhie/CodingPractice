#include<stdio.h>
#include<stdlib.h>
#include<fcntl.h>
#include<unistd.h>
#include<string.h>

int main()
{
    char Fname[20];
    int fd = 0;
    char Data[100];
    int length=0;

    printf("Enter file name to open :");
    scanf("%s",Fname);

    fd = open(Fname,O_RDWR | O_APPEND);

    if(fd==-1)
        return -1;

    printf("Enter the data in FILE :\n");
    scanf(" %[^'\n']s",Data);   

    length=strlen(Data);

    write(fd,Data,length);      //write(kashat lihaychay,kay lihaychay,kiti lihaychay);


    return 0;
}