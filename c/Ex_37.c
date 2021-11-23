#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main(int argc, char const *argv[])
{
    int max, search, t;
    int values[20];


    printf("How many values do you want to type? (max of 20): \n");
    scanf("%i", &max);
 
    for(int i = 0; i < max; i++)
    {
        printf("\nEnter with a value: \n");
        scanf("%i", &values[i]);      
    }

    searching:

    printf("\nEnter with the value you want to search for: \n");
    scanf("%i", &search);

    for (int i = 0; i < max; i++)
    {
        if (values[i] == search)
        {
            printf("\n\n The position is %i\n\n", i);
        }
        else
        {
            printf("\n\nValoue not found");
        }
    } 

    printf("\n\nIf you want to search for another number type '1' otherwise type '2':\n");
    scanf("%s", & t);

    if (t==1)
    {
        goto searching;
    }
    else
    {
        printf("\nok");
    }
}