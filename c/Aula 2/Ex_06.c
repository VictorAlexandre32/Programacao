#include <stdio.h>

int main(int argc, char const *argv[])
{
    float cotacao, dolar, real;
    printf("Entre com a cotacao atual do dolar: ");
    scanf("%f", &cotacao);
    printf("Entre com a quantidade de dolares: ");
    scanf("%f", &dolar);
    real = dolar * cotacao;
    printf("O valor de %.2f dolares e R$ %.2f", dolar, real);
    return 0;
}
