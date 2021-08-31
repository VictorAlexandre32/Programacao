#include <stdio.h>

int main(int argc, char const *argv[])
{
    float v1,v2,v3;
    
    printf("Entre com um valor qualquer: ");
    scanf("%f", &v1);
    printf("Entre com outro valor qualquer: ");
    scanf("%f", &v2);
    printf("Entre com outro valor qualquer: ");
    scanf("%f", &v3);
    
    if(v1 > v2 && v1 > v3)
        printf("%.2f",v1);
    else if(v2 > v3)
        printf("%.2f",v2);
    else
        printf("%.2f",v3);
    return 0;
}
