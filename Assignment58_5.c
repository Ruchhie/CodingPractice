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
    int iSize=0;
    int Count=0,i=0;
    char Data2[100];

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
        for(i=0;i<12;i++)
        {
            Data2[i]=Data[i];
        }
        break;
    }

    for(i=0;i<12;i++)
        {
            printf("%c",Data2[i]);
        }
    close(fd);
    return 0;
}