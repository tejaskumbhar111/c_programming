#include<stdio.h>
#pragma pack(1)
struct Demo
{
    int i;
    char ch;
    float f;

};
int main(){
    printf("%d\n",sizeof(struct Demo));
}
