#include<stdio.h>
#include<stdlib.h>
#include<fcntl.h>

int OpenFile(char Name[])
{

    int fd = open(Name,O_RDWR);

    if(fd==-1)
        printf("Unable to open file\n");
    else
        printf("Suceessfully opened file with FD %d\n",fd);

    return fd;
}

int main()
{
    char Fname[20];
    int fd = 0;

    printf("Enter file name to open :");
    scanf("%s",Fname);

    fd=OpenFile(Fname);
    return 0;
}