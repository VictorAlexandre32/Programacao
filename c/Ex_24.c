#include <stdio.h>
#include <ctype.h>

int main(int argc, char const *argv[])
{
    char sex, Sex;
    
    printf("Type your sex (F/M): ");
    scanf("%f", &sex);
    Sex = toupper(sex);

while (sex != 'F' && sex != 'M'){
    printf("Type your sex again. Only accept F for female or M for male: ");
    scanf("%f", &sex);
    Sex = toupper(sex);
}
    return 0;
}
