#include <stdio.h>

int main(int argc, char const *argv[])
{
    float peso,altura,R;

    printf("Entre com um peso em kg: ");
    scanf("%f", &peso);
    printf("Entre com uma altura em m: ");
    scanf("%f", &altura);

    R = peso / pow(altura,2);

    if(R >= 20 && R < 25)
        printf("Peso ideal");
    else    
        printf("Nao esta no peso ideal");
    return 0;
}
