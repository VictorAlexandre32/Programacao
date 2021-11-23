#include <stdio.h>

int main(int argc, char const *argv[])
{
    int v1;

    printf("Type a value: ");
    scanf("%i", &v1);

    while (v1 < 0)
    {
        printf("Type a value again. Only positive values: ");
        scanf("%i", &v1);
    }

    printf("Printing number %i times table... ", v1);

    for (int i = 1; i < 11; i++)
    {
        printf("%i x %i = %i", i, v1, i * v1);
    }
    
    return 0;
}
