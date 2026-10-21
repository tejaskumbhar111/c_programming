#include <stdio.h>
// Global variable
int Value1 = 10;
int Value2 = 11;
int Ans = 0;
int main()
{
    // Local Variables
    Ans = Value1 + Value2;

    printf("Addition is :%d\n", Ans);
    
    return 0;
}