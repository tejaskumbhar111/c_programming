#include <stdio.h>
#include <stdlib.h>
#include<unistd.h>

int main()
{
    int fd = 0;
    fd = creat("Hello.txt", 0777); // meaning of 0777, creat ha systemcall ahe 
    if (fd == -1)
    {
        printf("Unable to create a file\n");
        return -1;
    }
    else
    {
        printf("file gets created with fd: %d\n", fd);
    }

    return 0;
}