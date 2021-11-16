
/*Your friend is having a lot of difficulties with multiplication tables.
He's having the most trouble with the multiples of 8 table, and asks you 
to send him the multiples of 8 table so that he can learn it more easily. 
To do this, you decide to write a program that prints the multiples of 8 table.
Because you will use your code again in the future to 
print other multiplcation tables, you decide to use a loop and only one print 
statement. Your program must use the following format to print the 
multiples of 8 table (be careful with spaces):In this activity, you want to improve your existing
multiplication program (that prints the 8 times table). Your program should read an integer
from the user (not you) and print the multiplication table for the number that they enter.
To test if your program works, we will try running your code with several different inputs
so make sure you don't hard code the solution.*/



#include <stdio.h>
int main() {

 // variables declaration and initialization
    int i = 0; 
    int multiplicand = 0;
    int multiplier ;
    // which time table do you want to print
    scanf("%d", &multiplier ); 
    //product to create table
    for(i = 0; i < 11 ; i++) 
    {
        printf("%dx%d = %d\n", multiplicand  , multiplier, multiplicand * multiplier );
        multiplicand = multiplicand + 1;
        
    }

    return 0;
}