#include <stdio.h>

int main()
{
    double no = 3.14;      // Address of no = 100
    double *a = &no;       // Address of a = 200
    double **b = &a;       // Address of b = 300
    double ***c = &b;      // Address of c = 400
    double ****d = &c;     // Address of d = 500

    printf("%d", &no);
    // printf("%d", a);
    // printf("%d", &c);
    // printf("%d", &d);
    // printf("%d", d);
    // printf("%d", **d);
    // printf("%d", **c);
    // printf("%d", *b);

    return 0;
}