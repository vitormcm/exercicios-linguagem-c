#include <stdio.h>
int main()
{ 
    int seunumero, soma, resto;
    int d1, d2, d3, d4, d5, d6, d7;
    scanf("%d", &seunumero);
        d1 = seunumero % 10;
        seunumero = seunumero / 10;
        d2 = seunumero % 10;
        seunumero = seunumero / 10;
        d3 = seunumero % 10;
        seunumero = seunumero / 10;
        d4 = seunumero % 10;
        seunumero = seunumero / 10;
        d5 = seunumero % 10;
        seunumero = seunumero / 10;
        d6 = seunumero % 10;
        seunumero = seunumero / 10;
        d7 = seunumero % 10;

        d1 = ((d1 * 2) % 10) + ((d1 * 2) / 10); // estamos usando esse cálculo para somar os dígitos do resultado da multiplicação.
        d3 = ((d3 * 2) % 10) + ((d3 * 2) / 10);
        d5 = ((d5 * 2) % 10) + ((d5 * 2) / 10);
        d7 = ((d7 * 2) % 10) + ((d7 * 2) / 10);

        soma = (d1 + d2 + d3 + d4 + d5 + d6 + d7);
        resto = soma % 10;

        if(resto == 0) 
        {
            resto = 0;
        } else {
            resto = 10 - resto;
        }
        printf("%d\n", resto);
    return 0;
}