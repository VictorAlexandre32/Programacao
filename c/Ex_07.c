#include <stdio.h>

int main(int argc, char const *argv[])
{
    float prod1, prod2, prod3, prod4, prod5, pgto, total, troco;

    printf("Entre com o valor do primeiro produto: R$ ");
    scanf("%f", &prod1);
    printf("Entre com o valor do segundo produto: R$ ");
    scanf("%f", &prod2);
    printf("Entre com o valor do terceiro produto: R$ ");
    scanf("%f", &prod3);
    printf("Entre com o valor do quarto produto: R$ ");
    scanf("%f", &prod4);
    printf("Entre com o valor do quinto produto: R$ ");
    scanf("%f", &prod5);
    printf("Entre com o valor do pagamento: R$ ");
    scanf("%f", &pgto);

    total = prod1 + prod2 + prod3 + prod4 + prod5;
    troco = pgto - total;

    printf("O troco e de R$ %.2f", troco);
 
    return 0;
}
