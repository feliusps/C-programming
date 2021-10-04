/*Write a C program that has a function that prints a table of values
 for sine and cosine between (0, 1). You will upload your program as a text file. */

 //preprocessing directives
#include<stdio.h>
#include<stdlib.h>
#include<math.h>

// begin main
int main(void)
{
//variable declaration
float x_interval; //must be between 0 and 1

//choose the interval ex(0.2) will calculate sin/cos 0, 0.2, 0.4...
printf("Enter a value between 0 and 1: ");
scanf("%f", &x_interval);

// print heading
printf("\t::::  Table of values for sine and cosine   :::");
printf("\n%10s%10s%10s%10s\n\n", "sine", "   sine's result", " cosine", "   cosine's result"); 

// for loop calculate the sin and cos between (0,1)  
for(float i = 0; i <= 1; i = i + x_interval) //begin in 0 finish in 1 increase by x_interval

   {

    printf("sin(%f) = %f\tcos(%f) = %f\n", i, sin(i), i, cos(i));

   }

return 0;
}