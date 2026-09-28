#include <stdio.h>

int main()
{
    float p1, p2, p3;
    float t;
    float l1, l2, l3, l4, l5;
    scanf("%f %f %f", &p1, &p2, &p3);
    scanf("%f", &t);
    scanf("%f %f %f %f %f", &l1, &l2, &l3, &l4, &l5);
    float medialistas = (l1 + l2 + l3 + l4 + l5) / 10;
    float mediafinal = (p1 + 2*p2 + 3*p3 + 2*t) / 8 + medialistas;
    printf("%.2f\n", mediafinal);
    return 0;
}  