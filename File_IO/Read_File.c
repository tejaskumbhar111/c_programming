#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>

int main()
{
    int fd = 0;//file descriter
    char Arr[20]={'\0'};

    fd = open("Hello.txt", O_RDONLY); // meaning of 0777, creat ha systemcall ahe
    if (fd == -1)
    {
        printf("Unable to open a file\n");
        return -1;
    }
    else
    {
        printf("file gets opened with fd: %d\n", fd);
        read(fd,Arr,13);
       printf("Data from file is:%d\n",Arr);
        close(fd);
    }

    return 0;
}