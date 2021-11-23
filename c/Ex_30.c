#include <stdio.h>

int main(int argc, char const *argv[])
{
    int t1, t2 = 1, t3;

    printf("%i - %i", t1, t2);

    for (int i = 1; i < 29; i++)
    {
        t3 = t1 + t2;
        printf(" - %i", t3);
        t1 = t2;
        t2 = t3;
    }

    return 0;
}
