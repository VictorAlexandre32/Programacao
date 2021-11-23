#include <stdio.h>

int main(int argc, char const *argv[]){
    int values[10], greater;
    for(int i=0; i<10; i++){
        printf("Enter with a value: ");
        scanf("%i", &values[i]);
    }

    for (int i=1; i<10; i++)
    {
        if(values[0] < values[i]){
            values[0] = values[i];
        }
    }

greater = values[0];
printf("The greatest number is %i",greater);

return 0;
}