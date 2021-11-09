#include <stdio.h>

int main(int argc, char const *argv[])
{
    float n1,n2;

    printf("Entre com um valor: ");
    scanf("%f", &n1);
    printf("Entre com outro valor: ");
    scanf("%f", &n2);

    while(n2 <= n1)
    {
        printf("Entre com o segundo valor novamente: ");
        scanf("%f", &n2);
    }
    return 0;
}
