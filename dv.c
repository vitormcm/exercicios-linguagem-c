#include <stdio.h>
int main()
{ 
    int contacorrente, soma, resto;
    int d1, d2, d3, d4, d5, d6;
    scanf("%d", &contacorrente);
        d1 = contacorrente % 10;
        contacorrente = contacorrente / 10;
        d2 = contacorrente % 10;
        contacorrente = contacorrente / 10;
        d3 = contacorrente % 10;
        contacorrente = contacorrente / 10;
        d4 = contacorrente % 10;
        contacorrente = contacorrente / 10;
        d5 = contacorrente % 10;
        contacorrente = contacorrente / 10;
        d6 = contacorrente % 10;

        soma = (d1*2 + d2*3 + d3*4 + d4*5 + d5*6 + d6*7);
        resto = soma % 11;
        resto = 11 - resto;

    printf("%d\n", resto);
    return 0;
}