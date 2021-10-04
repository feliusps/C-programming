// a function is call recursive if it call itself, either directly or indirectly.

//preprocessor
#include<stdio.h>

//protoptype
int sum(int);

//example 1
//main begin
int main(void)
{
    printf("\n%d\n\n", sum(150));
    
    printf(" The universe is never ending! ");
    main(); // main is called by itself
    return 0;
}

//example 2
int sum(int n)
{
    if(n <= 1)
       return n;
    else
       return (n+ sum(n-1));
}