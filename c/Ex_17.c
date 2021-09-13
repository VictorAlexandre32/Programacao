#include <stdlib.h>

int main(int argc, char const *argv[])
{
    float a,b,c;
    printf("Digite um valor qualquer: ");
    scanf("%f", &a);
    printf("Digite um outro valor qualquer: ");
    scanf("%f", &b);
    printf("Digite um outro valor qualquer: ");
    scanf("%f", &c);
    if((pow(b,2)+ pow(c,2)) == pow(a,2)||
       (pow(a,2)+ pow(c,2)) == pow(b,2)||
       (pow(b,2)+ pow(a,2)) == pow(c,2))
        printf("Forma um triangulo retangulo");
    else
        printf("Nao forma um triangulo retangulo.");
    return 0;
}
