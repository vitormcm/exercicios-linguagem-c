#include <stdio.h>
int main()
{
    float x = 28.8;
    double y = 2.0012;
   double multiplicacao = x * y;
    printf("O resultado da multiplicacao de %.1f %.4lf = %.4lf\n",x, y, multiplicacao);
    return 0;
}