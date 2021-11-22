
/*Write a program that can give the sine of a value between 0 and 1 (non inclusive).
You will be graded based on whether the program can output a value in the correct range
and whether your code is well-formatted and logically correct. */

// headers
#include <stdio.h>
#include <math.h>

// begin main
int main(void) 
{
    // variables declaration
    double sine_value, x;
    
    // input value
    printf("Enter a value between 0 and 1 non inclusive: ");
    scanf("%lf", &x);
    
    // check if value is right
    if( x >= 0 && x < 1) // notice 1 is non inclusive
    {
        // find sin(x) 
        sine_value = sin(x);
        printf("\nThe sine value is %lf radians.\n ", sine_value);  
    }
    else
    {
        //ask to try a new value
        printf(" Imput value must be between 0 and 1 non inclusive\n");
        printf("Try again\n");
    }
    return 0;
}  