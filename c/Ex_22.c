#include <stdio.h>

int main(int argc, char const *argv[])
{
    float n1;

    printf("Entre com um numero positivo: ");
    scanf("%f", &n1);

    while(n1 < 0)
    {
        printf("Entre com um numero positivo: ");
        scanf("%f", &n1);
    }
    return 0;
}
