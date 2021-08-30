#include <stdlib.h>
#include <stdio.h>

int main(int argc, char const *argv[])
{
    int aresta, area;

    printf("Digite o valor da aresta de um quadrado: ");
    scanf("%i", &aresta);

    area = aresta * aresta;

    printf("A area do quadrado e = %i metros quadrados", area);
    return 0;
}
