/*Please write a C-program that uses a recursive function called "sumOfDigits()"
to compute the sum of the digits of a number. To do so, your main function 
should first read an integer number as input and then call sumOfDigits(), 
which should in turn call itself until there are no digits left to sum, 
at which point the final sum should display to the user.
Here is the main idea of how the recursion in sumOfDigits() should work:
sumOfDigits(6452) = 2 + sumOfDigits(645)
sumOfDigits(645) = 5 + sumOfDigits(64)*/


#include<stdio.h>

int sumOfDigits(int);

int main(void)
{
    //variables
    int number, digit_addition;

    //printf("Which number digits would you like to sum: ");
    scanf("%d", &number);

    digit_addition = sumOfDigits(number);
    printf("Resulting sum of the digit of the number is: %d\n", digit_addition);
    
return 0;
}

int sumOfDigits(int number)
{
   //variables
   int last_digit, sum_of_digits;
   //find the remainder using modulo
   
   printf("%d\n",  number % 10);
   printf("%d\n", number / 10);

   if(number == 0)
   {
       return 0;
   }
   else
   {
      //sumOfDigits(6452) = 2 + sumOfDigits(645)
       //find the remainder using modulo
      last_digit = number % 10;
      sum_of_digits =  last_digit + sumOfDigits(number / 10);// take the integer part
      return sum_of_digits;
   }

return 0;
}
