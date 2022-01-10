#include <stdio.h>

int main()
{
 
//! showMemory(start=65520)  
int y, x ; 
int array[] = {4, 6, 12, -5, -7, 3, 1, 0, -10};
//printf("%p", array);
int *ptr1, *ptr2;
ptr1 = array+2;
ptr2 = &ptr1[5];
y = *(ptr1+1);
x = *(ptr2-3);

return 0;
}