#include<stdio.h>
#include<stdlib.h>
#include<fcntl.h>
#include<unistd.h>
#include<string.h>

//accept filename and read whole file
int main()
{
    char Fname[20];
    int fd = 0;
    char Data[100];
    int Length=0;
    

    printf("Enter file name to open :");
    scanf("%s",Fname);

    fd=open(Fname,O_RDONLY);

    if(fd==-1)
    {
        printf("Unable to open file\n");
        return -1;
    }

    while( (Length=read(fd,Data,sizeof(Data)))!=0 )         //shevtch cha data(mug) tumcha 0 yet nhi tovr
    //joprynt read cha data 0 yet nai tovr
    {
        write(1,Data,Length);
    }

    close(fd);
    return 0;
}