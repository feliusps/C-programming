// the use of malloc and free exercise

#include <stdio.h>
#include <stdlib.h> //add stdlib
int main(void)
{
  int *a, *b;
  float *c;
  a = (int *) malloc(sizeof(int)); //create memory space use casting
  *a = 1;                          // dereference and put 1
  b = (int *) malloc(sizeof(int));
  *b = 2;
  free(a);
  free(b);
  c = (float *) malloc(sizeof(float));
  *c = 3.5;
  free(c);
  printf("a = %d, b = %d, c = %f\n", *a, *b, *c);
  return 0;
}
