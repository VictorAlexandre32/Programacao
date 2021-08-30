#include <stdio.h>

int main(int argc, char const *argv[])
{
    float n1,n2;
    printf("Entre com um valor qualquer: ");
    scanf("%f", &n1);
    printf("Entre com um outro valor qualquer: ");
    scanf("%f", &n2);

    if(n1 > n2)
        printf("%.2f",n1);
    else if(n2 > n1)
        printf("%.2f",n2);
    else
        printf("Os numeros sao identicos");
            
    return 0;
}
