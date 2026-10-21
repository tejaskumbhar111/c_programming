#include <stdio.h>
#pragma pack(1)
struct Demo
{
    int i = 11;//Error
    char ch = 'A';//Error
    float f = 90.99f;//Error memory is not allocated
};
int main()
{

    struct Demo dobj1;
    struct Demo dobj2;

    struct Demo *dp = NULL;
    dp = &dobj2;

    //Direct accessing operator .

    dobj1.i = 11;
    dobj1.ch = 'A';
    dobj1.f = 90.99f;
    
    //Indirect accessing operator ->
    dp->i = 21;
    dp->ch = 'B';
    dp->f = 91.99;
    printf("%d\n",dobj1.i); //11
    printf("%d\n",dp->i);//21

    return 0;
}
