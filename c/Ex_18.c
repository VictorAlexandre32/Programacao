#include <stdlib.h>

int main(int argc, char const *argv[])
{
    float peso,altura,imc;
    char sexo;

    printf("Entre com o seu peso em kg: ");
    scanf("%f", &peso);
    printf("Entre com a sua altura em metros: ");
    scanf("%f", &altura);
    printf("Digite seu sexo: ");
    scanf("%s", &sexo);

    imc = peso/ pow(altura,2);

    if(sexo == 'F')
        if(imc >= 19 && imc < 24)    
            printf("Peso ideal!");
        else
            printf("Nao esta no peso ideal!");
    if(sexo == 'M')
        if(imc >= 20 && imc < 25)
            printf("Peso ideal!");
        else
            printf("Nao esta no peso ideal!");
    return 0;
}
