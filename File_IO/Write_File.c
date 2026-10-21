#include <stdio.h>
#include <stdlib.h>
#include<unistd.h>
#include<fcntl.h>

int main()
{
    int fd = 0;
    fd = open("Hello.txt", O_RDWR); // meaning of 0777, creat ha systemcall ahe 
    if (fd == -1)
    {
        printf("Unable to open a file\n");
        return -1;
    }
    else
    {
        printf("file gets opened with fd: %d\n", fd);
        write(fd,"Jay Ganesh...",13);//total data letters under printf13 words
        close(fd);
    }

    return 0;
}