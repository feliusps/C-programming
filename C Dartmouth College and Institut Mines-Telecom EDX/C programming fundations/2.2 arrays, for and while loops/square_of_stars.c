/*Create a program that displays on the screen a square of n x n stars, 
with the integer n given as an input.*/

#include<stdio.h>

int main(void)
{
  //variable declaration and definition
  int n_length; // square length
  int i;
  int j;

  printf("read the lenght of the square and stars\n");
  scanf("%d", &n_length);

  for (i = 0; i < n_length; i++)
  {
      for (j = 0; j < n_length; j++)
      {
          printf("*");
      }
      printf("\n");
  }
  return 0;
} 