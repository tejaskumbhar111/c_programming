#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main()
{
    int ret = 0;

    ret = unlink("Demo.txt"); // Unlink man Man7.org link
    if (ret == -1)
    {
        printf("Unable to delete a file \n");
        return -1;
    }
    else
    {
        printf("File gets Sucessfully deleted\n");
    }

    return 0;
}