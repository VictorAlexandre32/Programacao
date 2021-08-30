#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    int altura, base, area;

    printf("Digite a base de um retangulo: ");
    scanf("%i", &base);

    printf("Digite a altura de um retangulo: ");
    scanf("%i", &altura);

    area = base * altura;

    printf("A area do retangulo e = %i metros quadrados", area);
    return 0;
}
