#include <stdio.h>

int main(int argc, char const *argv[])
{
    int sum;

    for (int i = 1; i < 101; i++)
    {
        sum += i;
    }
    
printf("The sum between the integer numbers from 1 to 100 is: %i", sum);

    return 0;
}
