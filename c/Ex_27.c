#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    float result, number, lower, higher;

        printf ("Enter the value you want to calculate the times table: ");
        scanf ("%f", &number);

        while (number < 0)
        {
            printf ("Only accpet positive numbers! Enter the value you want to calculate the times table: ");
            scanf ("%f", &number);
        }

        printf ("Type the lower limit: ");
        scanf ("%f", & lower);
        
        printf ("Type the higher limit: ");
        scanf ("%f", & higher);

        while (lower >= higher)
        {
            printf ("Invalid value, type a value higher than the lower limit: ");
            scanf ("%f", & higher);
        }

        for (size_t; higher >= lower; higher--)
        {  
        result = higher * number;
        printf ("\n %.0f x %.0f = %.0f", number, higher, result);
        }
}