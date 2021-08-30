#include <stdio.h>

int main(int argc, char const *argv[])
{
    float base,altura,area;
    printf("Digite o valor da base de um retangulo: ");
    scanf("%f", &base);
    printf("Digite o valor da altura de um retangulo: ");
    scanf("%f", &altura);

    area = base * altura;
    printf("Area do retangulo = %.2f metros quadrados\n",area);

    if(area > 100)
        printf("Terreno grande");

    else
        printf("Terreno pequeno");

    return 0;
}