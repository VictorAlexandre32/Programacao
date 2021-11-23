#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
 
int main(int argc, char *argv[])
{
  
  int multiplier;
  int numbers[2][3];
 
  printf("Type the numbers for the 2 x 3 matrix: \n");
  for(int i=0; i<2; i++)
    {
      for(int j=0; j<3; j++)
      {
        scanf("%i", &numbers[i][j]);
      }
    }
 
  printf("\nThe typed numbers were: \n");
  for(int i=0; i<2; i++)
    {
      for(int j=0; j<3; j++)
      {
        printf("%i ", numbers[i][j]);
      }
      printf("\n");
    }

  printf("\nEnter with a multiplier: \n");
  scanf("%i", & multiplier);

  printf("\nHere is the new matrix: \n");

  for(int i=0; i<2; i++)
    {
      for(int j=0; j<3; j++)
      {
          numbers[i][j]=numbers[i][j] * multiplier;
        printf("%i ", numbers[i][j]);
      }
      printf("\n");
    }
}