// the purpose of this program is write a table of powers as example of 
//how we can use  functions

// preprocesing
#include<stdio.h>
#include<math.h>
#include<stdlib.h>


//Constant declaration
#define N 7

//function prototype
long power(int, int);
void prn_heading(void);
void prn_tbl_ofpower(int);

// begin main
int main(void)
{
// call to functions

   prn_heading();
   prn_tbl_ofpower(N);

   return 0;
}

//function definition
void prn_heading(void) // heading
{
    printf("\n:::::   A Table Of Powers   :::::\n\n");
}

void prn_tbl_ofpower(int n) // create table
{
    int i, j;
    for (i = 1; i <= n; ++i)
    {
        for (j = 1; j<= n; ++j)
            if (j==1)
               printf("%ld\t", power(i, j));
            else
               printf("%ld\t", power(i, j));
        putchar('\n');
    }
}

// fuction called from another function
long power(int m, int n ) //find power called from inside  prn_tbl_ofpower function 
{
    int i;
    long product = 1;

    for(i = 1; i <= n; ++i)
        product *= m;
        return product;
}

