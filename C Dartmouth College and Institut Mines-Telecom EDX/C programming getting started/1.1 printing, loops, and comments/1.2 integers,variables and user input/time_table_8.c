/*Your friend is having a lot of difficulties with multiplication tables.
He's having the most trouble with the multiples of 8 table, and asks you 
to send him the multiples of 8 table so that he can learn it more easily. 
To do this, you decide to write a program that prints the multiples of 8 table.
Because you will use your code again in the future to 
print other multiplcation tables, you decide to use a loop and only one print 
statement. Your program must use the following format to print the 
multiples of 8 table (be careful with spaces):*/



#include <stdio.h>
int main() {

 // variables declaration and initialization
    int i = 0; 
    int multiplicand = 0;
    int multiplier = 8;
    int product = 0;
    
    //product to create table
    for(i = 0; i < 11 ; i++) 
    {
        printf("The multiplication of %d time %d = the product is %d\n", multiplicand  , multiplier, product = multiplicand * multiplier );
        multiplicand = multiplicand + 1;
        
    }

    return 0;
}