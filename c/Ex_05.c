#include <stdio.h>

int main(int argc, char const *argv[])
{
    float temp, fahrenheit;

    printf("Entre com uma temperatura em graus Celsius: ");
    scanf("%f", &temp);
    fahrenheit = (temp * 9/5) + 32;
    printf("O valor dessa temperatura em fahrenheit e: %.2f", fahrenheit);
    return 0;
}
