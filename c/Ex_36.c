#include <stdio.h>

int main(int argc, char const *argv[])
{
    int values[20], values2[20];
    float multiplier, multiple;

    for (int i = 0; i < 20; i++)
    {
        printf("Enter with a value: ");
        scanf("%i", &values[i]);
    }

    printf("Enter with a multiplier: ");
    scanf("%f", &multiplier);

    for (int i = 0; i < 20; i++)
    {
        multiple = values[i] * multiplier;
        values2[i] = multiple;
    }

    for (int i = 0; i < 20; i++)
    {
        printf(values[i]);
    }

    for (int i = 0; i < 20; i++)
    {
        printf(values2[i]);
    }
    
    return 0;
}