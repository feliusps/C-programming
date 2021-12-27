/*The goal of this problem is to find the smallest integer in a list of numbers.
To help you with this task, please write a function called min() that finds and 
returns the smallest amongst two integers (be sure to also write a prototype 
for this function). The function thus takes two integers as input and returns 
the smallest of the two. This function will use an if statement with a condition 
that contains either "less than" or "greater than".
Next, please use min() in your main function to work your way through an entire
list of numbers in order to find its minimum. The first number you read gives 
the number of elements in the list of integers under consideration. 
You will then read the integer values, using min() to keep only the 
smallest integer read at each step. In the end, please print out the 
smallest integer in the list.*/

#include<stdio.h>

int min(int num1, int num2 );

int main(void)
{
   //variables
   int int_number;
   int compare_number = 0; 
   int smallest, keep;
   int i;

   //printf("How many integer will you input\n");
   scanf("%d", &int_number);
   //printf("Please input a integer value\n");
   scanf("%d", &compare_number);
   smallest = compare_number;

// check and keep in memory
   for (i = 1; i < int_number; i++ )
   {
       keep = min(smallest, compare_number);
       if (keep == 0)
       {
           //assign the minimun value
           smallest = compare_number;
       }
       scanf("%d", &compare_number);    

   }

   printf("%d", smallest );
   return 0;
}

// function min
int min(int number1, int number2)
{
    int keep;
    if(number1 < number2)
    {
        keep = 1;
    }
    else
    {
        keep = 0 ;
    }
   return keep;    
}