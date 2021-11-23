#include <stdio.h>

int main(int argc, char const *argv[])
{
    int t1 = 2, serie = 3, n;

    printf("Type a postive value lower than 100: ");
    scanf("%i", &n);

    while (n < 0 && n > 100)
    {
        printf("Error! Type a postive value lower than 100 again: ");
        scanf("%i", &n);
    }
    

    for (int i = 0; i < n; i++)
    {
        printf("%i - ", t1);
        t1 += serie;
        serie += 2;
    }

    return 0;
}
