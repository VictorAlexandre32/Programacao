#include <stdio.h>

int main(int argc, char const *argv[])
{
    int values[10];

    for (int i = 1; i < 11; i++)
    {
        printf("Enter the #%i value: ", i);
        scanf("%i", values[i]);
    }

for (int i = 9; i > -1; i--)
{
    printf(values[i]);
}

    return 0;
}
