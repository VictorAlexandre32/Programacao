#include <stdio.h>

int main(int argc, char const *argv[])
{
    int values[20];
    float multiplier;

    for (int i = 0; i < 20; i++)
    {
        printf("Enter with a value: ");
        scanf("%i", values[i]);
    }

    printf("Enter with a multiplier: ");
    scanf("%f", &multiplier);

    for (int i = 0; i < 20; i++)
    {
        values[i] *= multiplier;
    }

    for (int i = 0; i < 20; i++)
    {
        printf(values[i]);
    }
    
    return 0;
}
