#include <stdio.h>

int main(){
    int moedas500, moedas100, moedas50, moedas10, moedas5, moedas1;
    int p, v;
    
    scanf("%d", &p);
    scanf("%d", &v);
    
    int troco = v - p;

    moedas500 = troco / 500;
    troco = troco % 500;
    
    moedas100 = troco / 100;
    troco = troco % 100;
    
    moedas50 = troco / 50;
    troco = troco % 50;
    
    moedas10 = troco / 10;
    troco = troco % 10;
    
    moedas5 = troco / 5;
    troco = troco % 5;
    
    moedas1 = troco;
    
    printf("%d\n", moedas500);
    printf("%d\n", moedas100);
    printf("%d\n", moedas50);
    printf("%d\n", moedas10);
    printf("%d\n", moedas5);
    printf("%d\n", moedas1);
    
    return 0;
}
