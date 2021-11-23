#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
 
int main(int argc, char *argv[])
{
  
  int numbers[2][3];
 
  printf("Type the numbers for the 2 x 3 matrix: \n");
  for(int i = 0; i < 2; i++)
  {
      for(int j = 0; j < 3; j++)
      {
        scanf("%i", &numbers[i][j]);
      }
  }
 
  printf("The typed numbers were: \n");
  for(int i=0; i<2; i++)
  {
      for(int j=0; j<3; j++)
      {
        printf("%i ", numbers[i][j]);
      }
      printf("\n");
  }

  return 0;
}