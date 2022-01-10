//pointer exercise


#include <stdio.h>
void myFunction(int); 

int main()
{
    int i;
    int *iAdr = &i;
    *iAdr = 10; 

    printf(" i = %d\n", i);
    printf(" *iAdr = %d\n", *iAdr); //dereferencing

    *iAdr = *iAdr - 2;
    printf(" i = %d\n", i);
    printf(" *iAdr = %d\n", *iAdr);

    (*iAdr) += 1;
    printf(" i = %d\n", i);
    printf(" *iAdr = %d\n", *iAdr);

 //====================================
 //second part


  i = 10;
  myFunction(i);
  printf("%d\n", i);
  
   
    return 0;
}

void myFunction(int j) 
{
    j = 20;
}