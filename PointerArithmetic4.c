#include <stdio.h>
int main()
{  
    //                p       q
    //           0    1   2   3    4
    int Arr[] = {11, 21, 51, 101, 111};

    int *p = NULL;
    int *q = NULL;

    p = &(Arr[1]);
    q = &(Arr[3]);
    printf("%d\n", *p);//21
    p = p + 3;
    printf("%d\n", *p);//111

    return 0;
}