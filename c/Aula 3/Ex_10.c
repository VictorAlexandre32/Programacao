#include <stdio.h>

int main(int argc, char const *argv[])
{
    float n1,n2;
    printf("Entre com um valor qualquer: ");
    scanf("%f", &n1);
    printf("Entre com um segundo valor qualquer, diferente do anterior: ");
    scanf("%f", &n2);
    if(n1 < n2)
        printf("%.2f",n1);
    else
        printf("%.2f",n2);
    return 0;
}