#include<stdio.h>
int main(){
    int no=10;
     int*p=NULL;
     p=&no;
     printf("%d\n",no);//10
    printf("%d\n",*p);//10
    *p=11;
    printf("%d\n",no);//11
    printf("%d\n",*p);//11
    return 0;


}