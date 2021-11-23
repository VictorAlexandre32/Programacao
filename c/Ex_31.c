#include <stdio.h>

int main(int argc, char const *argv[])
{
    int t1 = 1, t2 = 1, t3 = 1, t4;

    printf("%i - %i - %i", t1, t2, t3);

    for (int i = 1; i < 18; i++)
    {
        t4 = t1 + t2 + t3;
        printf(" - %i", t4);
        t1 = t2;
        t2 = t3;
        t3 = t4;
    }

    return 0;
}
