#include <stdio.h>
#include <math.h>

int main(int argc, char const *argv[])
{
    float peso, altura, imc;

    printf("Entre com o peso em kg: ");
    scanf("%f", &peso);
    printf("Entre com a altura em m: ");
    scanf("%f", &altura);

    imc = peso / pow(altura, 2);

    printf("O IMC e: %.2f", imc);
    return 0;
}
