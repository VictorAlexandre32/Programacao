#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    int base, altura, area;

    printf("Digite o valor da base de um triangulo: ");
    scanf("%i", &base);

    printf("Digite o valor da altura de um trinagulo: ");
    scanf("%i", &altura);

    area = (base * altura) / 2;
    printf("A area do triangulo e = %i metros quadrados", area);
    return 0;
}
