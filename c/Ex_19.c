#include <stdlib.h>

int main(int argc, char const *argv[])
{
    float t, v0, v, a;

    printf("Entre com a velocidade inicial (em m/s): ");
    scanf("%f", &v0);
    printf("Entre com a aceleracao (em m/s^2): ");
    scanf("%f", &a);
    printf("Entre com o tempo do percurso (em s): ");
    scanf("%f", &t);

    v = v0 + (a * t);

    if(v <= 40)
        printf("Veiculo muito lento");
    else if(v > 40 && v <= 60)
        printf("Velocidade permitida");
    else if(v > 60 && v <= 80)
        printf("Velocidade de cruzeiro");
    else if(v > 80 && v <= 120)
        printf("Veiculo rapido");
    else
        printf("Veiculo muito rapido");
    return 0;
}
