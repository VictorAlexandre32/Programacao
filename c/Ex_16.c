#include <stdio.h>

int main(int argc, char const *argv[])
{
  float lado01, lado02, lado03;
  
  printf("Digite o tamanho do lado 01: ");
  scanf("%f", &lado01);
 
  printf("Digite o tamanho do lado 02: ");
  scanf("%f", &lado02);
 
  printf("Digite o tamanho do lado 03: ");
  scanf("%f", &lado03);
 
  if ( ((lado01 + lado02) > lado03) &&
       ((lado01 + lado03) > lado02) &&
       ((lado02 + lado03) > lado01) ){
           if ( (lado01 == lado02) && (lado01 == lado03) ){
               printf("Triangulo Equilatero!");
           }
           else if( (lado01 != lado02) && (lado01 != lado03) ){
               printf("Triangulo Escaleno!");
           }
           else{
               printf("Triangulo Isosceles!");
           }
       }
       else{
           printf("Nao e Triangulo!");
       }

    return 0;
}
